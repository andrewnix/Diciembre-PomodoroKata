/*
 * main.cpp
 *
 * Autor: Andres F. Cardenas (Andrewnix)
 *
 * Este es el archivo principal... donde comienza la ejecucion del programa
*/

#include <iostream>
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
    Pomodoro pomodoro;
    pomodoro.start();
    pomodoro.pause();
    pomodoro.start();
    pomodoro.pause();
    pomodoro.start();
    pomodoro.stop();

    for(int i = 1; i <= 3; i++)
    {
        cout << "\nhola" << i;
        sleep(1);
    }

    return 0;
}
