#include <stdlib.h>
#include <iostream>

#include "Human.h"

Human::Human() {

};

char Human::makeMove() {
  char move;
  std::cout << "Enter move: ";
  std::cin >> move;
  return move;
};