#include "Crescendo.h"

Crescendo::Crescendo() {
  turnNum = 0;
};

char Crescendo::makeMove() {
  turnNum++;
  if (turnNum % 3 == 1) {
    return 'P';
  } else if (turnNum % 3 == 2) {
    return 'S';
  } else {
    return 'R';
  }
};