/*
 * The reazon to make this exemples is that i need
 * lern to programing using only my brain and not
 * IA agents, resently events in the IT world (black
 * october, php, attack of banck argentina system, etc)
 * doing me think that the execive IA agents using
 * to genereted of code, is BAD, BAD, REALY BAD IDEA
 *
 * So this project, using IA but not to genereted
 * code, only like browser to search info and
 * thinking with my crashed and slow brain and
 * force me to think how resolve the problems.
 *
 * For me IA angents have more problems that
 * solutions if you generete code and don't
 * understand nothing and don't are you that
 * think the problems to resolve.
 */

#include <curses.h>
#include <stdio.h>
#include <ncurses.h>


int main(int argc, char *argv[]) {
    initscr(); /* init the ncruses library */ 
    clear(); /* clean the stdscr buffer */
    noecho();/* not represent the in display the char of input keyboard */
    cbreak(); /* aviable respt character of input without press Intro */
    keypad(stdscr, true);

    printw("Press 'q' to quit.");

    for (int ch = getchar(); ch != 'q'; ch = getchar()) {
      /* move the cursor and write the format text */      
        mvprintw(1, 0,
                   ch == KEY_UP ? "up"
                 : ch == KEY_DOWN ? "down"
                 : ch == KEY_LEFT ? "left"
                 : ch == KEY_RIGHT ? "right" : "");
        clrtoeol(); /* clean from cursor to end line */
        refresh();
    }
    
    endwin(); // close windows
    return 0;
}
