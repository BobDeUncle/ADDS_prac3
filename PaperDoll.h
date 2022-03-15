#ifndef PAPERDOLL_H
#define PAPERDOLL_H

#include "Player.h"

class PaperDoll : public Player {
  int turnNum;
  public: 
    PaperDoll();
    char makeMove();
};

#endif