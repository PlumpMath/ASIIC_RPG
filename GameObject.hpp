#ifndef GAME_OBJECT_HPP
#define GAME_OBJECT_HPP

#include <iostream>
#include "Game.hpp"

class GameObject {
public:
  virtual void update() {}

  virtual void draw() {}

  void setPosVector(int pos) {
    posVector = pos;
  }
  int getPosVector() {
    return posVector;
  }

  int& X() {return posX;};
  int& Y() {return posY;};

protected:
  int posY;
  int posX;

  int posVector;
};

#endif
