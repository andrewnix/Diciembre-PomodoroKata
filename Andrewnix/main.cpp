/*
 * main.cpp
 *
 * Autor: Andres F. Cardenas (Andrewnix)
 *
 * Este es el archivo principal... donde comienza la ejecucion del programa
*/

#include <iostream>
#include <ncurses.h>
#include "headerPomodoro.hpp"

using namespace std;

/*
 * --codigo de andamiaje--
 * haciendo pruebas del funcionamiento de la clase
 * Pomodoro y de la funcion sleep() en linux
 * --codigo de andamiaje--
*/
int main()
{
    /*initscr();
    erase();
    refresh();*/

    Pomodoro p1;
    p1.start();
    p1.pause();
    p1.start();
    p1.stop();

    /*refresh();

    for(int i = 1; i <= 3; i++)
    {
        printw("h %d", i);
        refresh();
        sleep(1);
        erase();
        refresh();
    }

    endwin();*/

    return 0;
}
