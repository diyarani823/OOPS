#include <iostream>
using namespace std;

class Time {
public:
    int hours;
    int minutes;
    Time(int h = 0, int m = 0) {
        hours = h;
        minutes = m;
    }
    Time operator+(const Time& obj) {
        Time temp;
        temp.minutes = minutes + obj.minutes;
        temp.hours = hours + obj.hours + temp.minutes / 60; 
        temp.minutes = temp.minutes % 60; 
        return temp;
    }

    void display() {
        cout << hours << " hours " << minutes << " minutes" << endl;
    }
};

int main() {
    Time t1(2, 50);
    Time t2(1, 20);

    Time t3 = t1 + t2; 
    t3.display();      

    return 0;
}
