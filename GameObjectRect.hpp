#ifndef GAME_OBJECT_RECT_HPP
#define GAME_OBJECT_RECT_HPP

#include <iostream>
#include <string>

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

  //Default
  //TODO: Make it default at the top of the window
  //NOTE: Its like this just for debug reasons
  int posY = 5;
  int posX = 5;


};

#endif
