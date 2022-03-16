#include "FistfullODollars.h"

FistfullODollars::FistfullODollars() {
  turnNum = 0;
};

char FistfullODollars::makeMove() {
  turnNum++;
  if (turnNum % 3 == 1) {
    return 'R';
  } else {
    return 'P';
  }
};