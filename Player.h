#ifndef PLAYER_H
#define PLAYER_H

class Player {
  public: 
    Player();
    virtual char makeMove();
    int turnNum;
};

#endif