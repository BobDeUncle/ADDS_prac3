#ifndef TOURNAMENT_H
#define TOURNAMENT_H

#include <array>

#include "Player.h"

class Tournament {
  public: 
    Tournament();
    Player * run(std::array<Player *, 8>  competitors);
};

#endif