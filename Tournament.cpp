#include <iostream>

#include "Tournament.h"
#include "Referee.h"

using namespace std;

Tournament::Tournament() {};

Player * Tournament::run(array<Player *, 8>  competitors) {
  Referee referee;
  // std::array<Player *, 4> round1Winners = {competitors[0], competitors[2], competitors[4], competitors[6]};

  for (int i = 0; i < 4; i++) {
    int WTally = 0, LTally = 0, TTally = 0;

    for (int i = 0; i < 5; i++) {
      if (referee.refGame((*competitors[i]), (*competitors[i+1])) == 'W') {
        WTally++;
      } else if (referee.refGame((*competitors[i]), (*competitors[i+1])) == 'L') {
        LTally++;
      } else {
        TTally++;
      }
    }

  }

  return competitors[0];
};