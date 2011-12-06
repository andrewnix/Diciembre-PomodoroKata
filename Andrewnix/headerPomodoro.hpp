/*
 * headerPomodoro.hpp
 *
 * Autor: Andres F. Cardenas (Andrewnix)
 *
 * Este es el archivo cabecera que contiene la clase principal
*/

#include <iostream>
#include <cstring>

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

    private:
        int time;
        int interrupciones;
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
    cout << "\nDestruyendo pomodoro" << endl;
}


/*
 * Arranca en pomodoro recibiendo un argumento por parte del usuario
*/
string Pomodoro::start(int minutos)
{
    setTime(minutos);
    cout << "\nArrancando pomodoro" << endl;
    cout << "Tiempo restante: " << getTime() << endl;

    return "Pomodoro corriendo!!!";
}


/*
 * Arranca pomodoro con el valor por defecto que es 25
*/
string Pomodoro::start()
{
    cout << "\nArrancando pomodoro" << endl;
    cout << "Tiempo restante: " << getTime() << endl;

    return "Pomodoro corriendo!!!";
}


/*
 * Detiene el pomodoro, restaurando lo valores por defecto
*/
string Pomodoro::stop()
{
    cout << "\nDeteniendo pomodoro" << endl;
    setTime(25);
    setInterrup(0);

    return "Pomodoro detenido!!!";
}


/*
 * Pausa el pomodoro aumentando el numero de interrupciones en 1
*/
string Pomodoro::pause()
{
    cout << "\nEl pomodoro se pauso en el minuto: " << getTime() << endl;
    setAddInterrup();
    cout << "Numero de interrupciones: " << getInterrup() << endl;

    return "pomodoro pausado!!!";
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
