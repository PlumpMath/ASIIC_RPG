#include <ncurses.h>
#include <iostream>

//Prototypes
void rpgInit();
void rpgCleanup();

int main() {

  rpgInit(); // Call the init function

  //Cursor position variables
  int xPos = 0;
  int yPos = 0;

  for (int i = 0; i <= 10; i++) {
    //Increment the position variables
    xPos = i;
    yPos = i;

    move(xPos, yPos); //Move the cursor

    std::string str = "X"; //Our string we'll be using

    addch('X'); //Print a x

  }

  //Wait for user input
  getch();

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


//GOOD REFERENCEs:
/*
printw(string);         Print on stdscr at present cursor position
mvprintw(y, x, string);  Move to (y, x) then print string
wprintw(win, string);   Print on window win at present cursor position
                            in the window
mvwprintw(win, y, x, string);    Move to (y, x) relative to window
                                     co-ordinates and then print
*/
