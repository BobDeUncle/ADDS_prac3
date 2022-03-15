#include "PaperDoll.h"

PaperDoll::PaperDoll() {
  turnNum = 0;
};

char PaperDoll::makeMove() {
  turnNum++;
  if (turnNum % 3 == 1) {
    return 'P';
  } else {
    return 'S';
  }
};