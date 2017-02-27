#ifndef GAME_OBJECT_HPP
#define GAME_OBJECT_HPP

#include <iostream>
#include "Game.hpp"

class GameObject {
public:
  // for more reference on abstract functions
  // http://www.cplusplus.com/doc/tutorial/polymorphism/
  // https://en.wikibooks.org/wiki/C%2B%2B_Programming/Classes/Abstract_Classes
  virtual void update() {}
  virtual void draw() {}

  // mutator functions
  void setPosVector(unsigned int pos) {
    posVector = pos;
  }
  // accessors
  int getPosVector() {
    return posVector;
  }

  // accessor variables that returns part of location of object
  int& X() {return posX;};
  int& Y() {return posY;};

  //Get and Set the Name
  std::string getName() {return name;}
  void setName(std::string objectName) {name = objectName;};

protected:
  // location variables of object
  int posY;
  int posX;
  // what does this do? Is this like its orientation?
  int posVector;

  //Name of the object (defaults to GameObject)
  std::string name = "GameObject";
};

#endif
