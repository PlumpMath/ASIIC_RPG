#ifndef GAME_OBJECT_X_HPP
#define GAME_OBJECT_X_HPP

#include "headers.hpp"
#include "GameObject.hpp"

class GameObjectX : public GameObject {
private:

public:
  //Draw function
  void draw();

  void move(int xPos, int yPos);

  //constructor
  GameObjectX();
  //destructor
  ~GameObjectX();
};

#endif
