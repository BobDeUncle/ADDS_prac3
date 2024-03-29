#include "Referee.h"

Referee::Referee() {

};

char Referee::refGame(Player * player1, Player * player2) {
  char player1Move = (*player1).makeMove();
  char player2Move = (*player2).makeMove();

  if (player1Move != 'R' && player1Move != 'S' && player1Move != 'P') {
    // Returns error if invalid input from player
    return 'E';
  } else if (player1Move == player2Move) {
    return 'T';
  } else if ((player1Move == 'R' && player2Move == 'P') || (player1Move == 'P' && player2Move == 'S') || (player1Move == 'S' && player2Move == 'R')) {
    return 'L';
  }
  return 'W';
};