#include "Player.h"
#include <stdlib.h>

Player::Player() {
  turnNum = 0;
}

char Player::makeMove() {
  int randomNum = rand() % 3 + 1;
  if (randomNum == 1) {
    return 'R';
  } else if (randomNum == 2) {
    return 'P';
  } else {
    return 'S';
  }
}