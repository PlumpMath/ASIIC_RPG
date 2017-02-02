#ifndef GAME_OBJECT_HPP
#define GAME_OBJECT_HPP

#include <iostream>
#include "Game.hpp"

class GameObject {
public:
  virtual void update();

  virtual void draw();

private:

};

#endif
