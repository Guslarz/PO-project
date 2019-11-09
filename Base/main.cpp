#include <curses.h>
#include "BaseBackend.h"

int main()
{
	initscr();

	printw("Dziala");
	refresh();
	getch();

	endwin();
}