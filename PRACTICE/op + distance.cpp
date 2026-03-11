#include <iostream>
using namespace std;

class Distance {
public:
    int meters;
    int cm;
    Distance(int m = 0, int c = 0) {
        meters = m;
        cm = c;
    }
    Distance operator+(Distance d) {
        Distance temp;
        temp.cm = cm + d.cm;
        temp.meters = meters + d.meters;
        if (temp.cm >= 100) {
            temp.meters = temp.meters + temp.cm / 100;
            temp.cm = temp.cm % 100;
        }
        return temp;
    }

    void display() {
        cout << meters << " meters " << cm << " cm" << endl;
    }
};
int main() {
    Distance d1(30, 40);
    Distance d2(50, 30);

    Distance d3 = d1 + d2;
    d3.display();
    return 0;
}
