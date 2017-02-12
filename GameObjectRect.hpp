#ifndef GAME_OBJECT_RECT_HPP
#define GAME_OBJECT_RECT_HPP

#include <iostream>
#include "GameObject.hpp"

class GameObjectRect : public GameObject {
public:
  //Ability to get and set the size
  int& sizeX() {return rectSizeX;};
  int& sizeY() {return rectSizeY;};

  void update();
  void draw();

private:
  //Size variables of the rect
  int rectSizeX;
  int rectSizeY;

  //Defaults at the top of the window
  int posY = 0;
  int posX = 0;

};

#endif
