#ifndef GAME_OBJECT_HPP
#define GAME_OBJECT_HPP

#include "headers.hpp"

class GameObject {
protected:
  int X = 5;
  int Y = 5;

public:

  virtual void draw() = 0;

  int getPosX() {return X;};
  int getPosY() {return Y;};

};

#endif
