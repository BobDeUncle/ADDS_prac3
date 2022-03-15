#include <iostream>

#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include "RandomComputer.h"

using namespace std;

int main(void) {
  Human player1;
  Computer player2;
  Referee referee;
  RandomComputer player3;
  // cout << referee.refGame(player1, player2) << endl;
  cout << player3.makeMove() << endl;
  cout << player3.makeMove() << endl;
  cout << player3.makeMove() << endl;
  cout << player3.makeMove() << endl;
  cout << player3.makeMove() << endl;
}

