#ifndef FISTFULLODOLLARS_H
#define FISTFULLODOLLARS_H

#include "Player.h"

class FistfullODollars : public Player {
  int turnNum;
  public: 
    FistfullODollars();
    char makeMove();
};

#endif