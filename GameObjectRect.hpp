#ifndef GAME_OBJECT_RECT_HPP
#define GAME_OBJECT_RECT_HPP

#include <iostream>
#include "GameObject.hpp"

class GameObjectRect : public GameObject {
public:
  //get the size
  int getSizeX() {return rectSizeX;};
  int getSizeY() {return rectSizeY;};

  //set the size
  void setSizeX(int X) {rectSizeX = X;};
  void setSizeY(int Y) {rectSizeY = Y;};

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
