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

        string start(int);
        string start();
        string stop();
        string pause();

        void setTime(int);
        void setInterrup(int);
        int getInterrup();
        int getTime();

        void setAddInterrup();
        void setMinusTime();

        void setPause(bool);
        bool getPause();

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
string Pomodoro::start(int minutos)
{
    setTime(minutos);

    initscr();
    erase();

    printw("\nArrancando pomodoro\n");
    printw("Tiempo restante: %d", getTime());

    refresh();
    sleep(1);

    endwin();

    return "Pomodoro corriendo!!!";
}


/*
 * Arranca pomodoro con el valor por defecto que es 25
*/
string Pomodoro::start()
{
    initscr();
    erase();

    printw("\nArrancando pomodoro\n");
    printw("Tiempo restante: %d", getTime());

    refresh();
    sleep(1);

    endwin();


    return "Pomodoro corriendo!!!";
}


/*
 * Detiene el pomodoro, restaurando lo valores por defecto
*/
string Pomodoro::stop()
{
    setTime(25);
    setInterrup(0);

    initscr();
    erase();

    printw("\nDeteniendo pomodoro\n");

    refresh();
    sleep(1);

    endwin();

    return "Pomodoro detenido!!!";
}


/*
 * Pausa el pomodoro aumentando el numero de interrupciones en 1
*/
string Pomodoro::pause()
{
    setAddInterrup();

    initscr();
    erase();

    printw("\nEl pomodoro se pauso en el minuto: %d\n", getTime());
    printw("Numero de interrupciones: %d", getInterrup());

    refresh();
    sleep(1);

    endwin();

    return "Pomodoro pausado!!!";
}


/*
 * Establece los minutos para el pomodoro
*/
void Pomodoro::setTime(int minutos)
{ time = minutos; }


/*
 * Disminuye en uno el atributo "time"
*/
void Pomodoro::setMinusTime()
{ time--; }


/*
 * Establece el numero de interrupciones que lleva en el pomodoro
*/
void Pomodoro::setInterrup(int paramInter)
{ interrupciones = paramInter; }


/*
 * Aumenta en uno el atributo "interrupciones"
*/
void Pomodoro::setAddInterrup()
{ interrupciones++; }


/*
 * Devuelve el tiempo del pomodoro
*/
int Pomodoro::getTime()
{ return time; }


/*
 * Devuelve el numero de interrupciones que se llevan
*/
int Pomodoro::getInterrup()
{ return interrupciones; }

/*
 * set the value for atribute pause
*/
void Pomodoro::setPause(bool elec)
{ pausa = elec; }

/*
 * get value of atribute pause
*/
bool Pomodoro::getPause()
{ return pausa; }
