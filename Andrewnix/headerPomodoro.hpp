/*
 * headerPomodoro.hpp
 *
 * Autor: Andres F. Cardenas (Andrewnix)
 *
 * Este es el archivo cabecera que contiene la clase principal
*/

#include <iostream>
#include <cstring>
#include <ncurses.h>

using namespace std;

class Pomodoro
{
    public:
        Pomodoro();
        ~Pomodoro();

        void start(int);
        void start();
        void stop();
        void pause();
        /*void resume();*/

        /*
         * setTime(): establece el valor para el atributo time
         * getTime(): devuelve el valor del atributo time
        */
        void setTime(int minutos) { time = minutos; };
        int getTime() { return time; }

        /*
         * setInterrup(): establece el valor para el atributo interrupciones
         * getInterrup(): devuelve el valor del atributo interrupciones
        */
        void setInterrup(int paramInter) { interrupciones = paramInter; }
        int getInterrup() { return interrupciones; }

        /*
         * setAddInterrup(): aumenta en uno el valor del atributo interrupciones
         * setMinusTime(): disminuye en uno el valor del atributo time
        */
        void setAddInterrup() { interrupciones++; }
        void setMinusTime() { time--; }

        /*
         * setPause(): establece el valor para el atributo pausa
         * getpause(): devuelve el valor del atributo pausa
        */
        void setPause(bool elec) { pausa = elec; }
        bool getPause() { return pausa; }

    private:
        int time;
        int interrupciones;
        bool pausa;
};


/*
 * Inicializa el objeto Pomodoro con los valores por defecto
*/
Pomodoro::Pomodoro()
{
    setTime(25);
    setInterrup(0);
}


/*
 * Finaliza el objeto Pomodoro
*/
Pomodoro::~Pomodoro()
{

}


/*
 * Arranca en pomodoro recibiendo un argumento por parte del usuario
*/
void Pomodoro::start(int minutos)
{
    setTime(minutos);

    initscr();
    erase();

    printw("\nArrancando pomodoro\n");
    printw("Tiempo restante: %d", getTime());

    refresh();
    sleep(1);

    endwin();
}


/*
 * Arranca pomodoro con el valor por defecto que es 25
*/
void Pomodoro::start()
{
    initscr();
    erase();

    printw("\nArrancando pomodoro\n");
    printw("Tiempo restante: %d", getTime());

    refresh();
    sleep(1);

    endwin();
}


/*
 * Detiene el pomodoro, restaurando lo valores por defecto
*/
void Pomodoro::stop()
{
    setTime(25);
    setInterrup(0);

    initscr();
    erase();

    printw("\nDeteniendo pomodoro\n");

    refresh();
    sleep(1);

    endwin();
}


/*
 * Pausa el pomodoro aumentando el numero de interrupciones en 1
*/
void Pomodoro::pause()
{
    setAddInterrup();

    initscr();
    erase();

    printw("\nEl pomodoro se pauso en el minuto: %d\n", getTime());
    printw("Numero de interrupciones: %d", getInterrup());

    refresh();
    sleep(1);

    endwin();
}
