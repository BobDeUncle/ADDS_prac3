#include <iostream>

#include "Tournament.h"
#include "Referee.h"

using namespace std;

Player * runRound(Player * player1, Player * player2) {
  int WTally = 0, LTally = 0;
  Referee referee;

  for (int i = 0; i < 5; i++) {
    char gameResult = referee.refGame(*player1, *player2);
    if (gameResult == 'W') {
      WTally++;
    } else if (gameResult == 'L') {
      LTally++;
    } 
  }

  if (LTally > WTally) {
    return player2;
  } else {
    return player1;
  }
} 

Tournament::Tournament() {};

Player * Tournament::run(array<Player *, 8>  competitors) {
  Referee referee;
  std::array<Player *, 4> round1Winners = {competitors[0], competitors[2], competitors[4], competitors[6]};

  for (int i = 0; i < 4; i++) {
    Player * winner = runRound(competitors[i*2], competitors[(i*2)+1]);
    round1Winners[i] = winner;
  }

  std::array<Player *, 2> round2Winners = {round1Winners[0], round1Winners[2]};

  for (int i = 0; i < 2; i++) {
    Player * winner = runRound(round1Winners[i*2], round1Winners[(i*2)+1]);
    round2Winners[i] = winner;
  }

  Player * winner = runRound(round2Winners[0], round2Winners[1]);

  return winner;
};