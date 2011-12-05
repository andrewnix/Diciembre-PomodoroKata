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

}

string Pomodoro::start(int minutos)
{
    setTime(minutos);

    cout << "Tiempo establecido: " << getTime() << endl;
    cout << "Numero de interrupciones: " << getInterrup() << endl;
}

string Pomodoro::start()
{
    cout << "Arrancando pomodoro" << endl;
    cout << "Tiempo establecido: " << getTime() << endl;
    cout << "Numero de interrupciones: " << getInterrup() << endl;
}

string Pomodoro::stop()
{
    cout << "parando pomodoro";
    setTime(25);
    setInterrup(0);
}

string Pomodoro::pause()
{
    getTime();
    setInterrup(1);
    getInterrup();
}

void Pomodoro::setTime(int minutos)
{
    time = minutos;
}

void Pomodoro::setInterrup(int paramInter)
{
    interrupciones = paramInter;
}

int Pomodoro::getTime()
{
    return time;
}

int Pomodoro::getInterrup()
{
    return interrupciones;
}
