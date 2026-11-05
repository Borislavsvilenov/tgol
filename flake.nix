{
  description = "TUI Game of Life";

  inputs = {
    nixpkgs.url = "github:nixos/nixpkgs/nixpkgs-unstable";
    flake-utils.url = "github:numtide/flake-utils";

    TUILIB.url = "github:Borislavsvilenov/TUILIB";
  };

  outputs = { self, nixpkgs, flake-utils, TUILIB }: {
    overlays.default = final: prev: {
      res = final.callPackage ({stdenv, tuilib, ...}:
        stdenv.mkDerivation {
          src = ./.;
          pname = "tgol";
          version = "0.1.0";
          nativeBuildInputs = [ stdenv.cc ];

          buildInputs = [ tuilib ];
          
          buildPhase = ''
            runHook preBuild

            $CC -g main.c src/*.c -Iinclude -L. -ltuilib -o tgol

            runHook postBuild
          '';

          installPhase = ''
            runHook preInstall

            mkdir -p $out/bin
            cp $pname $out/bin/$pname

            runHook postInstall      
          '';
        }
      ) { tuilib = TUILIB.packages.${final.stdenv.hostPlatform.system}.TUILIB; };
    };
  } // 
  (flake-utils.lib.eachDefaultSystem (system:
    let
      pkgs = import nixpkgs {
        inherit system;
        overlays = [ self.overlays.default ];
      };
      lib = nixpkgs.lib;
    in
      {
        packages = {
          tgol = pkgs.res;
          default = self.packages.${system}.tgol;
        };

        devShells.default = pkgs.mkShell {
          buildInputs = with pkgs; [ TUILIB.packages.${system}.TUILIB ];
          shellHook = ''
            alias comp="cc -g main.c -Iinclude -L. -ltuilib -o test"
            alias run="./test"
          '';
        };
      }
  ));
}

