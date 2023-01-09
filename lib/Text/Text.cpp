#include <string.h>

#include "Text.h"

#define W 5
#define H 9

typedef struct {
  const char c;
  const char data[H];
} entry;

// clang-format off
const entry MONOGRAM[] = {
  {' ', {0, 0, 0, 0, 0, 0, 0, 0, 0}},
  {'!', {4, 4, 4, 4, 4, 0, 4, 0, 0}},
  {'"', {10, 10, 10, 0, 0, 0, 0, 0, 0}},
  {'#', {0, 10, 31, 10, 10, 31, 10, 0, 0}},
  {'$', {4, 30, 5, 14, 20, 15, 4, 0, 0}},
  {'%', {17, 17, 8, 4, 2, 17, 17, 0, 0}},
  {'&', {6, 9, 9, 30, 9, 9, 22, 0, 0}},
  {'\'', {4, 4, 4, 0, 0, 0, 0, 0, 0}},
  {'(', {8, 4, 4, 4, 4, 4, 8, 0, 0}},
  {')', {2, 4, 4, 4, 4, 4, 2, 0, 0}},
  {'*', {0, 8, 42, 28, 42, 8, 0, 0, 0}},
  {'+', {0, 4, 4, 31, 4, 4, 0, 0, 0}},
  {',', {0, 0, 0, 0, 0, 4, 4, 2, 0}},
  {'-', {0, 0, 0, 31, 0, 0, 0, 0, 0}},
  {'.', {0, 0, 0, 0, 0, 4, 4, 0, 0}},
  {'/', {16, 16, 8, 4, 2, 1, 1, 0, 0}},
  {'0', {14, 17, 25, 21, 19, 17, 14, 0, 0}},
  {'1', {4, 6, 4, 4, 4, 4, 31, 0, 0}},
  {'2', {14, 17, 16, 8, 4, 2, 31, 0, 0}},
  {'3', {14, 17, 16, 12, 16, 17, 14, 0, 0}},
  {'4', {18, 18, 17, 31, 16, 16, 16, 0, 0}},
  {'5', {31, 1, 15, 16, 16, 17, 14, 0, 0}},
  {'6', {14, 1, 1, 15, 17, 17, 14, 0, 0}},
  {'7', {31, 16, 16, 8, 4, 4, 4, 0, 0}},
  {'8', {14, 17, 17, 14, 17, 17, 14, 0, 0}},
  {'9', {14, 17, 17, 30, 16, 17, 14, 0, 0}},
  {':', {0, 4, 4, 0, 0, 4, 4, 0, 0}},
  {';', {0, 4, 4, 0, 0, 4, 4, 2, 0}},
  {'<', {0, 24, 6, 1, 6, 24, 0, 0, 0}},
  {'=', {0, 0, 31, 0, 31, 0, 0, 0, 0}},
  {'>', {0, 3, 12, 16, 12, 3, 0, 0, 0}},
  {'?', {14, 17, 16, 8, 4, 0, 4, 0, 0}},
  {'@', {14, 25, 21, 21, 25, 1, 14, 0, 0}},
  {'A', {14, 17, 17, 17, 31, 17, 17, 0, 0}},
  {'B', {15, 17, 17, 15, 17, 17, 15, 0, 0}},
  {'C', {14, 17, 1, 1, 1, 17, 14, 0, 0}},
  {'D', {15, 17, 17, 17, 17, 17, 15, 0, 0}},
  {'E', {31, 1, 1, 15, 1, 1, 31, 0, 0}},
  {'F', {31, 1, 1, 15, 1, 1, 1, 0, 0}},
  {'G', {14, 17, 1, 29, 17, 17, 14, 0, 0}},
  {'H', {17, 17, 17, 31, 17, 17, 17, 0, 0}},
  {'I', {31, 4, 4, 4, 4, 4, 31, 0, 0}},
  {'J', {16, 16, 16, 16, 17, 17, 14, 0, 0}},
  {'K', {17, 9, 5, 3, 5, 9, 17, 0, 0}},
  {'L', {1, 1, 1, 1, 1, 1, 31, 0, 0}},
  {'M', {17, 27, 21, 17, 17, 17, 17, 0, 0}},
  {'N', {17, 17, 19, 21, 25, 17, 17, 0, 0}},
  {'O', {14, 17, 17, 17, 17, 17, 14, 0, 0}},
  {'P', {15, 17, 17, 15, 1, 1, 1, 0, 0}},
  {'Q', {14, 17, 17, 17, 17, 17, 14, 24, 0}},
  {'R', {15, 17, 17, 15, 17, 17, 17, 0, 0}},
  {'S', {14, 17, 1, 14, 16, 17, 14, 0, 0}},
  {'T', {31, 4, 4, 4, 4, 4, 4, 0, 0}},
  {'U', {17, 17, 17, 17, 17, 17, 14, 0, 0}},
  {'V', {17, 17, 17, 17, 10, 10, 4, 0, 0}},
  {'W', {17, 17, 17, 17, 21, 27, 17, 0, 0}},
  {'X', {17, 17, 10, 4, 10, 17, 17, 0, 0}},
  {'Y', {17, 17, 10, 4, 4, 4, 4, 0, 0}},
  {'Z', {31, 16, 8, 4, 2, 1, 31, 0, 0}},
  {'[', {12, 4, 4, 4, 4, 4, 12, 0, 0}},
  {'\\', {1, 1, 2, 4, 8, 16, 16, 0, 0}},
  {']', {6, 4, 4, 4, 4, 4, 6, 0, 0}},
  {'^', {4, 10, 17, 0, 0, 0, 0, 0, 0}},
  {'_', {0, 0, 0, 0, 0, 0, 31, 0, 0}},
  {'`', {2, 4, 0, 0, 0, 0, 0, 0, 0}},
  {'a', {0, 0, 30, 17, 17, 17, 30, 0, 0}},
  {'b', {1, 1, 15, 17, 17, 17, 15, 0, 0}},
  {'c', {0, 0, 14, 17, 1, 17, 14, 0, 0}},
  {'d', {16, 16, 30, 17, 17, 17, 30, 0, 0}},
  {'e', {0, 0, 14, 17, 31, 1, 14, 0, 0}},
  {'f', {12, 18, 2, 15, 2, 2, 2, 0, 0}},
  {'g', {0, 0, 30, 17, 17, 17, 30, 16, 14}},
  {'h', {1, 1, 15, 17, 17, 17, 17, 0, 0}},
  {'i', {4, 0, 6, 4, 4, 4, 31, 0, 0}},
  {'j', {16, 0, 24, 16, 16, 16, 16, 17, 14}},
  {'k', {1, 1, 17, 9, 7, 9, 17, 0, 0}},
  {'l', {3, 2, 2, 2, 2, 2, 28, 0, 0}},
  {'m', {0, 0, 15, 21, 21, 21, 21, 0, 0}},
  {'n', {0, 0, 15, 17, 17, 17, 17, 0, 0}},
  {'o', {0, 0, 14, 17, 17, 17, 14, 0, 0}},
  {'p', {0, 0, 15, 17, 17, 17, 15, 1, 1}},
  {'q', {0, 0, 30, 17, 17, 17, 30, 16, 16}},
  {'r', {0, 0, 13, 19, 1, 1, 1, 0, 0}},
  {'s', {0, 0, 30, 1, 14, 16, 15, 0, 0}},
  {'t', {2, 2, 15, 2, 2, 2, 28, 0, 0}},
  {'u', {0, 0, 17, 17, 17, 17, 30, 0, 0}},
  {'v', {0, 0, 17, 17, 17, 10, 4, 0, 0}},
  {'w', {0, 0, 17, 17, 21, 21, 10, 0, 0}},
  {'x', {0, 0, 17, 10, 4, 10, 17, 0, 0}},
  {'y', {0, 0, 17, 17, 17, 17, 30, 16, 14}},
  {'z', {0, 0, 31, 8, 4, 2, 31, 0, 0}},
  {'{', {8, 4, 4, 2, 4, 4, 8, 0, 0}},
  {'|', {4, 4, 4, 4, 4, 4, 4, 0, 0}},
  {'}', {2, 4, 4, 8, 4, 4, 2, 0, 0}},
  {'~', {18, 13, 0, 0, 0, 0, 0, 0, 0}}
};
// clang-format on

char current_color = 1;

void Text::setColor(char color) { current_color = color; }

int Text::renderChar(char pixels[PIXELS], char c, int x, int y) {
  const char *data;
  const int len = sizeof(MONOGRAM) / sizeof(MONOGRAM[0]);

  for (int i = 0; i < len; i++) {
    if (MONOGRAM[i].c == c) {
      data = MONOGRAM[i].data;
      break;
    }
  }

  for (int r = 0; r < H; r++) {
    for (int c = 0; c < W; c++) {
      const int X = c + x;
      const int Y = r + y;
      if (X >= 0 && X < 16 && Y >= 0 && Y < 16 && data[r] & (1 << c)) {
        pixels[Y * 16 + X] = current_color;
      }
    }
  }

  return W;
}

void Text::renderText(char pixels[PIXELS], const char *text, int x, int y,
                      int kerning) {
  int o = 0;
  int len = strlen(text);

  for (int i = 0; i < len; i++) {
    o += renderChar(pixels, text[i], x + o, y) + kerning;
  }
}

void Text::renderText(char pixels[PIXELS], const char *text, int x, int y) {
  renderText(pixels, text, x, y, 1);
}

void Text::renderText4x4(char pixels[PIXELS], const char text[4]) {
  renderChar(pixels, text[0], 2, 0);
  renderChar(pixels, text[1], 9, 0);
  renderChar(pixels, text[2], 2, 9);
  renderChar(pixels, text[3], 9, 9);
}