#ifndef FISTFULLODOLLARS_H
#define FISTFULLODOLLARS_H

#include "Player.h"

class FistfullODollars : public Player {
  public: 
    FistfullODollars();
    int turnNum;
    char makeMove();
};

#endif