#include <stdlib.h>
#include "RandomComputer.h"

RandomComputer::RandomComputer() : Computer() {}

char RandomComputer::makeMove() {
  int randomNum = rand() % 3 + 1;
  if (randomNum == 1) {
    return 'R';
  } else if (randomNum == 2) {
    return 'P';
  } else {
    return 'S';
  }
}