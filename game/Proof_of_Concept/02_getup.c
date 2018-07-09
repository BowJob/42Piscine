#include <stdio.h>
#include <ncurses.h>


int main()
{
	int ch;

	initscr();
	//clear();
	//noecho();
	//cbreak();
	ch = getch();
	if(ch == KEY_LEFT)
		printw("Left arrow is pressed\n");

	return (0);
}
