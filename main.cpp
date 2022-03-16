#include <iostream>
#include <typeinfo> 

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
  Avalanche player2;
  Bureaucrat player3;
  Bureaucrat player4;
  Toolbox player5;
  Toolbox player6;
  Crescendo player7;
  Crescendo player8;
  FistfullODollars player9;
  Tournament tournament;
  std::array<Player *, 8> playerArray = {&player2, &player3, &player4, &player5, &player6, &player7, &player8, &player9};
  Player * winner = tournament.run(playerArray);
  // cout << winner << endl;
}

