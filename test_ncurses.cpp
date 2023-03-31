#include <iostream>
#include <ncurses.h>
#include <stdlib.h>
using namespace std; 

int main(int argc, char ** argv){
    initscr(); //inizializza la libreria ncurses

    //stampa una stringa (const char *) to a window 
    printw("HELLO WORDL!"); 
    refresh(); 

    int c = getch(); 

    printw("%d", c) ;
   
   // noecho();  // nessuna echo dell'input
    // cbreak(); //prende i caratteri in 
                //input uno alla volta, senza attendere il \n 
  
   
    getch(); 
    endwin(); 
    return 0; 
}
