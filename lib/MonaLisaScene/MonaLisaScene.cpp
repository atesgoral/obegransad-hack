#include <Arduino.h>

#include <Bitmap.h>
#include <Globals.h>

#include "MonaLisaScene.h"

// clang-format off
const char MONA_LISA[PIXELS] = {
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2,
  2, 2, 2, 2, 2, 2, 2, 2, 1, 0, 1, 2, 2, 2, 2, 2,
  1, 1, 2, 2, 2, 1, 2, 2, 1, 0, 0, 1, 2, 2, 2, 2,
  1, 1, 1, 1, 1, 1, 2, 2, 2, 0, 0, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 0, 1, 2, 2, 1, 0, 0, 1, 1, 1, 1,
  1, 1, 1, 1, 0, 1, 2, 3, 3, 2, 1, 1, 0, 1, 1, 1,
  1, 1, 1, 0, 0, 1, 2, 2, 2, 1, 0, 0, 0, 0, 1, 1,
  1, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 0, 0, 1, 1,
  1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
  1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
  0, 0, 0, 1, 1, 2, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
// clang-format on

void MonaLisaScene::render(char pixels[PIXELS], const int frame) {
  Bitmap::renderBitmap(pixels, MONA_LISA);
}