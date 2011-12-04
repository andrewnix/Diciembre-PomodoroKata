#include <iostream>
#include <cstring>
using namespace std;

class Pomodoro
{
    public:
        Pomodoro();
        ~Pomodoro();

        String start(unsigned int minutes);
        String stop();
        String pause();

        void setTime(unsigned int minutes);
        int getTime();

    private:
        unsigned int time;
}
