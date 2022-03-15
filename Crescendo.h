#ifndef CRESCENDO_H
#define CRESCENDO_H

#include "Player.h"

class Crescendo : public Player {
  int turnNum;
  public: 
    Crescendo();
    char makeMove();
};

#endif