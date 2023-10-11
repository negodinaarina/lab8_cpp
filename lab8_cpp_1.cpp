#include <iostream>
#include <string>
using namespace std;

class Time{
    int hours, minutes, seconds;
    public:
        Time(){
            hours = 0;
            minutes = 0;
            seconds = 0;
        }
        Time(int h, int m, int s){
            m += s / 60;
            s %= 60;
            h += m / 60;
            m %= 60;
            hours = h;
            minutes = m;
            seconds = s;
        }
        void printTime() const{
            cout << hours << ":" << minutes << ":" << seconds << endl;
        }
        static Time sumTimes(Time t1, Time t2){
            Time t3 = Time(t1.hours + t2.hours, t1.minutes + t2.minutes, t1.seconds + t2.seconds);
            return t3;
        }
};

int main(){
    Time t1;
    Time t2(12, 34, 70);
    Time t3 = Time::sumTimes(t1, t2);
    t1.printTime();
    t2.printTime();
    t3.printTime();
}