#ifndef GAME_OBJECT_RECT_HPP
#define GAME_OBJECT_RECT_HPP

#include <iostream>
#include "GameObject.hpp"

class GameObjectRect : public GameObject {
public:
  //Ability to get and set the size
  int*& size() {return rectSize;};

private:
  int* rectSize;

  //Defaults at the top of the window
  int posY = 0;
  int posX = 0;

};

#endif
