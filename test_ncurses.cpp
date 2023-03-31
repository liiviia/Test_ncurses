#include <iostream>
#include <ncurses.h>
#include <stdlib.h>

int main(int argc, char ** argv){
    initscr();
    noecho(); 
    cbreak(); 

    int yMax, xMax; 
    getmaxyx(stdscr, yMax, xMax); 


    WINDOW * inputwin = newwin (3, xMax-12, yMax-5, 5); 
    box (inputwin, 0, 0); 
    refresh(); 
    wrefresh(inputwin); 

    getch(); 
    endwin();  

    return 0; 
}