#include <TUILIB.h>
#include <stdio.h>
#include <unistd.h>

void initPentadecathlon(Vec2i gameSize, BrailMatrix* game) {
    int cx = gameSize.x / 2;
    int cy = gameSize.y / 2;

    setBit(game, (Vec2i){cx - 5, cy + 0}, 1);
    setBit(game, (Vec2i){cx - 4, cy + 0}, 1);
    setBit(game, (Vec2i){cx - 3, cy - 1}, 1);
    setBit(game, (Vec2i){cx - 3, cy + 1}, 1);
    setBit(game, (Vec2i){cx - 2, cy + 0}, 1);
    setBit(game, (Vec2i){cx - 1, cy + 0}, 1);
    setBit(game, (Vec2i){cx + 0, cy + 0}, 1);
    setBit(game, (Vec2i){cx + 1, cy + 0}, 1);
    setBit(game, (Vec2i){cx + 2, cy - 1}, 1);
    setBit(game, (Vec2i){cx + 2, cy + 1}, 1);
    setBit(game, (Vec2i){cx + 3, cy + 0}, 1);
    setBit(game, (Vec2i){cx + 4, cy + 0}, 1);
}

void initLWSS(Vec2i gameSize, BrailMatrix* game) {
    int cx = gameSize.x / 2;
    int cy = gameSize.y / 2;

    setBit(game, (Vec2i){cx - 2, cy - 1}, 1);
    setBit(game, (Vec2i){cx + 1, cy - 1}, 1);
    setBit(game, (Vec2i){cx + 2, cy + 0}, 1);
    setBit(game, (Vec2i){cx - 2, cy + 1}, 1);
    setBit(game, (Vec2i){cx + 1, cy + 1}, 1);
    setBit(game, (Vec2i){cx + 2, cy + 1}, 1);
    setBit(game, (Vec2i){cx - 1, cy + 2}, 1);
    setBit(game, (Vec2i){cx + 0, cy + 2}, 1);
    setBit(game, (Vec2i){cx + 1, cy + 2}, 1);
    setBit(game, (Vec2i){cx + 2, cy + 2}, 1);
}

void initTumbler(Vec2i gameSize, BrailMatrix* game) {
    int cx = gameSize.x / 2;
    int cy = gameSize.y / 2;

    setBit(game, (Vec2i){cx - 3, cy - 2}, 1);
    setBit(game, (Vec2i){cx - 3, cy - 1}, 1);
    setBit(game, (Vec2i){cx - 3, cy + 0}, 1);
    setBit(game, (Vec2i){cx - 3, cy + 1}, 1);
    setBit(game, (Vec2i){cx - 2, cy - 2}, 1);
    setBit(game, (Vec2i){cx - 2, cy + 1}, 1);
    setBit(game, (Vec2i){cx - 1, cy - 1}, 1);
    setBit(game, (Vec2i){cx - 1, cy + 0}, 1);

    setBit(game, (Vec2i){cx + 1, cy + 0}, 1);
    setBit(game, (Vec2i){cx + 1, cy + 1}, 1);
    setBit(game, (Vec2i){cx + 2, cy - 1}, 1);
    setBit(game, (Vec2i){cx + 2, cy + 2}, 1);
    setBit(game, (Vec2i){cx + 3, cy - 1}, 1);
    setBit(game, (Vec2i){cx + 3, cy + 0}, 1);
    setBit(game, (Vec2i){cx + 3, cy + 1}, 1);
    setBit(game, (Vec2i){cx + 3, cy + 2}, 1);
}

void initRPentomino(Vec2i gameSize, BrailMatrix* game) {
    int cx = gameSize.x / 2;
    int cy = gameSize.y / 2;

    setBit(game, (Vec2i){cx + 0, cy - 1}, 1);
    setBit(game, (Vec2i){cx + 1, cy - 1}, 1);
    setBit(game, (Vec2i){cx - 1, cy + 0}, 1);
    setBit(game, (Vec2i){cx + 0, cy + 0}, 1);
    setBit(game, (Vec2i){cx + 0, cy + 1}, 1);
}

void initPulsar(Vec2i gameSize, BrailMatrix* game) {
    int cx = gameSize.x / 2;
    int cy = gameSize.y / 2;

    setBit(game, (Vec2i){cx - 6, cy - 4}, 1);
    setBit(game, (Vec2i){cx - 5, cy - 4}, 1);
    setBit(game, (Vec2i){cx - 4, cy - 4}, 1);
    setBit(game, (Vec2i){cx - 6, cy - 1}, 1);
    setBit(game, (Vec2i){cx - 5, cy - 1}, 1);
    setBit(game, (Vec2i){cx - 4, cy - 1}, 1);
    setBit(game, (Vec2i){cx - 1, cy - 6}, 1);
    setBit(game, (Vec2i){cx - 1, cy - 5}, 1);
    setBit(game, (Vec2i){cx - 1, cy - 4}, 1);
    setBit(game, (Vec2i){cx - 4, cy - 2}, 1);
    setBit(game, (Vec2i){cx - 2, cy - 4}, 1);
    setBit(game, (Vec2i){cx - 2, cy - 2}, 1);

    setBit(game, (Vec2i){cx + 4, cy - 4}, 1);
    setBit(game, (Vec2i){cx + 5, cy - 4}, 1);
    setBit(game, (Vec2i){cx + 6, cy - 4}, 1);
    setBit(game, (Vec2i){cx + 4, cy - 1}, 1);
    setBit(game, (Vec2i){cx + 5, cy - 1}, 1);
    setBit(game, (Vec2i){cx + 6, cy - 1}, 1);
    setBit(game, (Vec2i){cx + 1, cy - 6}, 1);
    setBit(game, (Vec2i){cx + 1, cy - 5}, 1);
    setBit(game, (Vec2i){cx + 1, cy - 4}, 1);
    setBit(game, (Vec2i){cx + 4, cy - 2}, 1);
    setBit(game, (Vec2i){cx + 2, cy - 4}, 1);
    setBit(game, (Vec2i){cx + 2, cy - 2}, 1);

    setBit(game, (Vec2i){cx - 6, cy + 1}, 1);
    setBit(game, (Vec2i){cx - 5, cy + 1}, 1);
    setBit(game, (Vec2i){cx - 4, cy + 1}, 1);
    setBit(game, (Vec2i){cx - 6, cy + 4}, 1);
    setBit(game, (Vec2i){cx - 5, cy + 4}, 1);
    setBit(game, (Vec2i){cx - 4, cy + 4}, 1);
    setBit(game, (Vec2i){cx - 1, cy + 6}, 1);
    setBit(game, (Vec2i){cx - 1, cy + 5}, 1);
    setBit(game, (Vec2i){cx - 1, cy + 4}, 1);
    setBit(game, (Vec2i){cx - 4, cy + 2}, 1);
    setBit(game, (Vec2i){cx - 2, cy + 4}, 1);
    setBit(game, (Vec2i){cx - 2, cy + 2}, 1);

    setBit(game, (Vec2i){cx + 4, cy + 1}, 1);
    setBit(game, (Vec2i){cx + 5, cy + 1}, 1);
    setBit(game, (Vec2i){cx + 6, cy + 1}, 1);
    setBit(game, (Vec2i){cx + 4, cy + 4}, 1);
    setBit(game, (Vec2i){cx + 5, cy + 4}, 1);
    setBit(game, (Vec2i){cx + 6, cy + 4}, 1);
    setBit(game, (Vec2i){cx + 1, cy + 6}, 1);
    setBit(game, (Vec2i){cx + 1, cy + 5}, 1);
    setBit(game, (Vec2i){cx + 1, cy + 4}, 1);
    setBit(game, (Vec2i){cx + 4, cy + 2}, 1);
    setBit(game, (Vec2i){cx + 2, cy + 4}, 1);
    setBit(game, (Vec2i){cx + 2, cy + 4}, 1);
    setBit(game, (Vec2i){cx + 2, cy + 2}, 1);
}

void initAcorn(Vec2i gameSize, BrailMatrix* game) {
    int cx = gameSize.x / 2;
    int cy = gameSize.y / 2;

    setBit(game, (Vec2i){cx - 3, cy - 1}, 1);
    setBit(game, (Vec2i){cx - 2, cy - 1}, 1);
    setBit(game, (Vec2i){cx - 2, cy + 1}, 1);
    setBit(game, (Vec2i){cx + 1, cy + 0}, 1);
    setBit(game, (Vec2i){cx + 2, cy - 1}, 1);
    setBit(game, (Vec2i){cx + 3, cy - 1}, 1);
    setBit(game, (Vec2i){cx + 4, cy - 1}, 1);
}

int main(int argc, char* argv[]) {
  initLib();
  enableRawMode();

  int running = 1;
  Vec2i gameSize = {WIDTH * 2, HEIGHT * 4};
  Vec2i xoffset = {1, 0};
  Vec2i yoffset = {0, 1};
  Vec2i xyoffset = {1, 1};

  BrailMatrix* game = initBrailMatrix(gameSize);
  BrailMatrix* aux = initBrailMatrix(gameSize);

  size_t dataSize = WIDTH * HEIGHT;

  if (argc > 1) {
    int preset = atoi(argv[1]);
    switch (preset) {
      case 1:
        initPentadecathlon(gameSize, game);
        break;
      case 2:
        initLWSS(gameSize, game);
        break;
      case 3:
        initTumbler(gameSize, game);
        break;
      case 4:
        initRPentomino(gameSize, game);
        break;
      case 5:
        initPulsar(gameSize, game);
        break;
      case 6:
        initAcorn(gameSize, game);
        break;
    }
  } else {
    initPentadecathlon(gameSize, game);
  }

  while (running) {
    
    int key = readKey();

    switch (key) {
      case KEY_ESC:
        running = false;
        break;
    }

    drawBrail(game, (Vec2i){0, 0}, (Color){160, 140, 10, 10, 10, 20});
    
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
