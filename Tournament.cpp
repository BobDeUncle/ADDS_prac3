#include <iostream>

#include "Tournament.h"
#include "Referee.h"

using namespace std;

Tournament::Tournament() {};

Player * Tournament::run(array<Player *, 8>  competitors) {
  Referee referee;
  std::array<Player *, 4> round1Winners = {competitors[0], competitors[2], competitors[4], competitors[6]};

  for (int i = 0; i < 4; i++) {
    int WTally = 0, LTally = 0;

    for (int i = 0; i < 5; i++) {
      if (referee.refGame((*competitors[i]), (*competitors[i+1])) == 'W') {
        WTally++;
      } else if (referee.refGame((*competitors[i]), (*competitors[i+1])) == 'L') {
        LTally++;
      } 
    }
    if (LTally > WTally) {
      round1Winners[0] = competitors[i+1];
    }

    WTally = 0;
    LTally = 0;
  }

  std::array<Player *, 2> round2Winners = {round1Winners[0], round1Winners[2]};

  for (int i = 0; i < 2; i++) {
    int WTally = 0, LTally = 0;

    for (int i = 0; i < 5; i++) {
      if (referee.refGame((*competitors[i]), (*competitors[i+1])) == 'W') {
        WTally++;
      } else if (referee.refGame((*competitors[i]), (*competitors[i+1])) == 'L') {
        LTally++;
      } 
    }
    if (LTally > WTally) {
      round2Winners[0] = competitors[i+1];
    }

    WTally = 0;
    LTally = 0;
  }

  Player * round3Winner = round2Winners[0];
  int WTally = 0, LTally = 0;

  for (int i = 0; i < 5; i++) {
    if (referee.refGame((*competitors[i]), (*competitors[i+1])) == 'W') {
      WTally++;
    } else if (referee.refGame((*competitors[i]), (*competitors[i+1])) == 'L') {
      LTally++;
    }
  }
  if (LTally > WTally) {
    round3Winner = round2Winners[1];
  }

  return round3Winner;
};