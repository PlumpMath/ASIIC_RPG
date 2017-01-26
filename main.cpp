#include <ncurses.h>
#include <iostream>
#include <fstream>
#include <cstring>
#include <sstream>

//Prototypes
void rpgInit();
void rpgCleanup();
void writeChar(int posX, int posY);
void loadLevel(std::string file);

int main() {

  // rpgInit(); // Call the init function
  cbreak(); //Stop th eline buffering, everything comes to me :)
  keypad(stdscr, TRUE); //Enable F1


  loadLevel("level");

  // int currentX = 0;
  // int currentY = 0;
  //
  // int targetX = 0;
  // int targetY = 0;
  //
  // int ch;
  //
  // const char space[1] = {' '}; //Soace string
  //
  //
  // while ((ch = getch()) != KEY_F(1)) {
  //   switch(ch) {
  //     case KEY_LEFT:
  //       targetX--;
  //
  //       move(currentY, currentX);
  //       printw(space);
  //
  //       currentX = targetX;
  //       currentY = targetY;
  //
  //       writeChar(currentX, currentY);
  //
  //       break;
  //
  //     case KEY_RIGHT:
  //       targetX++;
  //
  //       move(currentY, currentX);
  //       printw(space);
  //
  //       currentX = targetX;
  //       currentY = targetY;
  //
  //       writeChar(currentX, currentY);
  //
  //       break;
  //
  //     case KEY_UP:
  //       targetY--;
  //
  //       move(currentY, currentX);
  //       printw(space);
  //
  //       currentX = targetX;
  //       currentY = targetY;
  //
  //       writeChar(currentX, currentY);
  //
  //       break;
  //
  //     case KEY_DOWN:
  //       targetY++;
  //
  //       move(currentY, currentX);
  //       printw(space);
  //
  //       currentX = targetX;
  //       currentY = targetY;
  //
  //       writeChar(currentX, currentY);
  //
  //       break;
  //
  //   }
  //  }

  rpgCleanup();

  return 0;
}

void rpgInit() {
  initscr(); //Init the lib

  //NOTE: Not working because of the missing window pointer, to fix later :)
  //keypad(window, true); //Initializes the arrows, F1, F2 etc...

}

void rpgCleanup() {
  curs_set(1);
  clear();
  //Shutdown ncurses
  endwin();
}


void writeChar(int posX, int posY) {
  move(posY, posX); //Move the cursor
  char x[1] = {'X'};
  printw(x); //Print the character
}

void loadLevel(std::string file) {
  std::cout << "In loadlevel" << std::endl; //DEBUG

  //Convert filename to char*
  const char *fileName = file.c_str();

  //Create an iftream object and open our file
  std::ifstream level;
  level.open(fileName);

  //Size of the map array
  int mapX;
  int mapY;

  //Variable we'll be putting the line read into
  std::string input;

  //Construct the map array using the sizes specified at the beginning of the file
  getline(level, input);
  std::istringstream ( input ) >> mapX;

  getline(level, input);
  std::istringstream ( input ) >> mapY;

  std::string map[mapY][mapX];

  std::cout << "Created variables and opened file" << std::endl;

  for (int i = 0; i <= mapY - 1; i++) {
    std::cout << "In getline loop" << std::endl;
    getline(level, input); //Get the line

    //Process it and put it in the level array
    for (int j = 0; j <= mapX - 1; j++) {
      std::cout << "Adding input to map : " << i << " " << j << std::endl;
      map[i][j] = input[j];
      std::cout << "Input : " << input[j] << std::endl;
      std::cout << "Input added" << std::endl;
    }
  }

  //Print out the map array
  for(int i = 0; i <= mapY - 1; i++) {
    std::cout << "In print loop" << std::endl;
    for(int j = 0; j <= mapX - 1; j++) {
      std::cout << map[i][j] << std::endl;
    }

  }
}

//GOOD REFERENCES:
/*
printw(string);         Print on stdscr at present cursor position
mvprintw(y, x, string);  Move to (y, x) then print string
wprintw(win, string);   Print on window win at present cursor position
                            in the window
mvwprintw(win, y, x, string);    Move to (y, x) relative to window
                                     co-ordinates and then print

Tutorial : http://tldp.org/HOWTO/NCURSES-Programming-HOWTO/index.html
*/
