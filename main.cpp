#include <iostream>

#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include "RandomComputer.h"
#include "Avalanche.h"
#include "Bureaucrat.h"
#include "Toolbox.h"
#include "Crescendo.h"
#include "PaperDoll.h"
#include "FistfullODollars.h"
#include "Tournament.h"

using namespace std;

int main(void) {
  Human player1;
  Computer player2;
  RandomComputer player3;
  Avalanche player4;
  Bureaucrat player5;
  Toolbox player6;
  Crescendo player7;
  PaperDoll player8;
  FistfullODollars player9;
  Tournament tournament;
  std::array<Player *, 8> playerArray = {&player2, &player3, &player4, &player5, &player6, &player7, &player8, &player9};
  Player * winner = tournament.run(playerArray);
  cout << (*winner).makeMove() << endl;
}

