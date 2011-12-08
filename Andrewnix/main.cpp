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
    Pomodoro p1;
    p1.start();
    p1.pause();
    p1.start();
    p1.stop();

    return 0;
}
