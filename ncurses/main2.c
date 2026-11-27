/*
 * Ok, now in this archive traing that the temninal
 * has break in the half.
 * spoiler, run fine ;)
 */

#include <stdio.h>
#include <ncurses.h>


int main() {
    int y, x;
    WINDOW *win1, *win2; //windows definitions 
    
    initscr(); //init the ncruses library
    clear(); // clean the stdscr buffer
    noecho(); // not represent the in display the char of input keyboard
    cbreak(); // aviable resept character of input without press Intro
    keypad(stdscr, true);
    getmaxyx(stdscr, y, x);

    for (int ch = getchar(); ch != 'q'; ch = getchar()) {
      /*
       * Windows 1 constructions and limits definitions
       */
        win1 = newwin(10, 20, 0, 0);
        box(win1, 0, 0);
        mvwprintw(win1, 1, 1, "[Ventanda 1]");
        mvwprintw(win1, 1, 2,
                   ch == KEY_UP ? "up"
                 : ch == KEY_DOWN ? "down"
                 : ch == KEY_LEFT ? "left"
                 : ch == KEY_RIGHT ? "right" : "");

        /*
         * Windows 2 constructions and limits definitions
         */
        win2 = newwin(10, 20, 0, 21);
        box(win2, 0, 0);
        mvwprintw(win2, 1, 1, "[Ventana 2]");
        mvwprintw(win2, 1, 2,
                   ch == KEY_UP ? "up"
                 : ch == KEY_DOWN ? "down"
                 : ch == KEY_LEFT ? "left"
                 : ch == KEY_RIGHT ? "right" : "");
        
        
        clrtoeol();
        wrefresh(win1);
        wrefresh(win2);
        
    }
    
    delwin(win1);
    delwin(win2);
    endwin();
    return 0;
}
