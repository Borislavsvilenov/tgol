#include <TUILIB.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>

static void stampPattern(Vec2i gameSize, BrailMatrix* game, const char** rows, int height) {
  int width = 0;
  while (rows[0][width]) width++;

  int ox = gameSize.x / 2 - width / 2;
  int oy = gameSize.y / 2 - height / 2;

  for (int y = 0; y < height; y++)
    for (int x = 0; x < width; x++)
      if (rows[y][x] == 'O') 
        setBit(game, (Vec2i){ox + x, oy + y}, 1);
}

static void stampPatternAt(Vec2i gameSize, BrailMatrix* game, const char** rows, int height, int dx, int dy) {
  int width = 0;
  while (rows[0][width]) width++;

  int ox = gameSize.x / 2 + dx - width / 2;
  int oy = gameSize.y / 2 + dy - height / 2;

  for (int y = 0; y < height; y++)
    for (int x = 0; x < width; x++)
      if (rows[y][x] == 'O')
        setBit(game, (Vec2i){ox + x, oy + y}, 1);
}

void initPulsar(Vec2i gameSize, BrailMatrix* game) {
  const char* p[] = {
    "..OOO...OOO..",
    ".............",
    "O....O.O....O",
    "O....O.O....O",
    "O....O.O....O",
    "..OOO...OOO..",
    ".............",
    "..OOO...OOO..",
    "O....O.O....O",
    "O....O.O....O",
    "O....O.O....O",
    ".............",
    "..OOO...OOO..",
  };
  stampPattern(gameSize, game, p, 13);
}

void initPentadecathlon(Vec2i gameSize, BrailMatrix* game) {
  const char* p[] = {
    "..O....O..",
    "OO.OOOO.OO",
    "..O....O..",
  };
  stampPattern(gameSize, game, p, 3);
}

void initFigureEight(Vec2i gameSize, BrailMatrix* game) {
  const char* p[] = {
    "OO....",
    "OO.O..",
    "....O.",
    ".O....",
    "..O.OO",
    "....OO",
  };
  stampPattern(gameSize, game, p, 6);
}

void initGosperGun(Vec2i gameSize, BrailMatrix* game) {
  const char* p[] = {
    "........................O...........",
    "......................O.O...........",
    "............OO......OO............OO",
    "...........O...O....OO............OO",
    "OO........O.....O...OO..............",
    "OO........O...O.OO....O.O...........",
    "..........O.....O.......O...........",
    "...........O...O....................",
    "............OO......................",
  };
  stampPattern(gameSize, game, p, 9);
}

void initKoksGalaxy(Vec2i gameSize, BrailMatrix* game) {
  const char* p[] = {
    "OOOOOO.OO",
    "OOOOOO.OO",
    ".......OO",
    "OO.....OO",
    "OO.....OO",
    "OO.....OO",
    "OO.......",
    "OO.OOOOOO",
    "OO.OOOOOO",
  };
  stampPattern(gameSize, game, p, 9);
}

void initOctagon(Vec2i gameSize, BrailMatrix* game) {
  const char* p[] = {
    "...OO...",
    "..O..O..",
    ".O....O.",
    "O......O",
    "O......O",
    ".O....O.",
    "..O..O..",
    "...OO...",
  };
  stampPatternAt(gameSize, game, p, 8, 0, 0);
}

void initTumbler(Vec2i gameSize, BrailMatrix* game) {
  const char* p[] = {
    ".OO.OO.",
    ".OO.OO.",
    "..O.O..",
    "O.O.O.O",
    "O.O.O.O",
    "OO...OO",
  };
  stampPatternAt(gameSize, game, p, 6, 0, 0);
}

void initPulsarQuartet(Vec2i gameSize, BrailMatrix* game) {
  const char* p[] = {
    "..OOO...OOO..",
    ".............",
    "O....O.O....O",
    "O....O.O....O",
    "O....O.O....O",
    "..OOO...OOO..",
    ".............",
    "..OOO...OOO..",
    "O....O.O....O",
    "O....O.O....O",
    "O....O.O....O",
    ".............",
    "..OOO...OOO..",
  };
  stampPatternAt(gameSize, game, p, 13, -10, -10);
  stampPatternAt(gameSize, game, p, 13,  10, -10);
  stampPatternAt(gameSize, game, p, 13, -10,  10);
  stampPatternAt(gameSize, game, p, 13,  10,  10);
}

void initRPentomino(Vec2i gameSize, BrailMatrix* game) {
  const char* p[] = {
    ".OO",
    "OO.",
    ".O.",
  };
  stampPatternAt(gameSize, game, p, 3, 0, 0);
}

void initAcorn(Vec2i gameSize, BrailMatrix* game) {
  const char* p[] = {
    ".O.....",
    "...O...",
    "OO..OOO",
  };
  stampPatternAt(gameSize, game, p, 3, 0, 0);
}

void initDiehard(Vec2i gameSize, BrailMatrix* game) {
  const char* p[] = {
    "......O.",
    "OO......",
    ".O...OOO",
  };
  stampPatternAt(gameSize, game, p, 3, 0, 0);
}

void initPiHeptomino(Vec2i gameSize, BrailMatrix* game) {
  const char* p[] = {
    "OOO",
    "O.O",
    "O.O",
  };
  stampPatternAt(gameSize, game, p, 3, 0, 0);
}

void initLWSS(Vec2i gameSize, BrailMatrix* game) {
  const char* p[] = {
    ".O..O",
    "O....",
    "O...O",
    "OOOO.",
  };
  stampPatternAt(gameSize, game, p, 4, 0, 0);
}

void initInfiniteRow(Vec2i gameSize, BrailMatrix* game) {
  const char* p[] = {
    "OOOOOOOO.OOOOO...OOO......OOOOOOO.OOOOO",
  };
  stampPatternAt(gameSize, game, p, 1, 0, 0);
}

void initRandomSoup(Vec2i gameSize, BrailMatrix* game, unsigned seed) {
  srand(seed);
  int w = gameSize.x / 2;
  int h = gameSize.y / 2;
  int ox = gameSize.x / 2 - w / 2;
  int oy = gameSize.y / 2 - h / 2;
  for (int y = 0; y < h; y++)
    for (int x = 0; x < w; x++)
      if (rand() % 8 < 3)
        setBit(game, (Vec2i){ox + x, oy + y}, 1);
}

int main(int argc, char* argv[]) {
  initLib();
  enableRawMode();

  int running = 1;
  int paused = 0;

  int key;

  Vec2i gameSize = {(WIDTH+2) * 2, (HEIGHT+2) * 4};
  Vec2i xoffset = {1, 0};
  Vec2i yoffset = {0, 1};
  Vec2i xyoffset = {1, 1};

  BrailMatrix* game = initBrailMatrix(gameSize);
  BrailMatrix* aux = initBrailMatrix(gameSize);

  size_t dataSize = (WIDTH+2) * (HEIGHT+2);

  if (argc > 1) {
    int preset = atoi(argv[1]);
    switch (preset) {
      case 1:  initKoksGalaxy(gameSize, game);      break;
      case 2:  initPulsar(gameSize, game);          break;
      case 3:  initPentadecathlon(gameSize, game);  break;
      case 4:  initFigureEight(gameSize, game);     break;
      case 5:  initGosperGun(gameSize, game);       break;
      case 6:  initOctagon(gameSize, game);         break;
      case 7:  initTumbler(gameSize, game);         break;
      case 8:  initPulsarQuartet(gameSize, game);   break;
      case 9:  initRPentomino(gameSize, game);      break;
      case 10: initAcorn(gameSize, game);           break;
      case 11: initDiehard(gameSize, game);         break;
      case 12: initPiHeptomino(gameSize, game);     break;
      case 13: initLWSS(gameSize, game);            break;
      case 14: initInfiniteRow(gameSize, game);     break;   
      case 15: initRandomSoup(gameSize, game,
                   argc > 2 ? (unsigned)atoi(argv[2]) : (unsigned)time(NULL));
    }
  } else {
    initKoksGalaxy(gameSize, game);
  }

  while (running) {

start:

    key = readKey();

    switch (key) {
      case KEY_ESC:
        running = false;
        break;

      case ' ':
        paused = !paused;
        break;
    }

    if(paused){
      goto start;
    }

    drawBrail(game, (Vec2i){-1, -1}, (Color){245, 169, 127, 30, 32, 48});

    for (size_t i = 0; i < gameSize.x; i++) {
      for (size_t j = 0; j < gameSize.y; j++) {
        Vec2i pos = {i, j};

        int val = getBit(game, vec2i_add(pos, xoffset)) + 
          getBit(game, vec2i_add(pos, xyoffset)) +
          getBit(game, vec2i_add(pos, yoffset)) +
          getBit(game, vec2i_sub(pos, xoffset)) + 
          getBit(game, vec2i_sub(pos, xyoffset)) +
          getBit(game, vec2i_sub(pos, yoffset)) +
          getBit(game, vec2i_add(pos, vec2i_sub(xoffset, yoffset))) +
          getBit(game, vec2i_sub(pos, vec2i_sub(xoffset, yoffset)));

        if (getBit(game, pos)) {
          if (val < 2) {
            setBit(aux, pos, 0);
          } else if (val > 3) {
            setBit(aux, pos, 0);
          } else {
            setBit(aux, pos, 1);
          }
        } else {
          if (val == 3) {
            setBit(aux, pos, 1);
          }
        }
      }
    }

    memcpy(game->data, aux->data, dataSize);

    updateFrame();
    usleep(16666);
  }

  closeLib();

  return running;
}
