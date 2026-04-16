#include <iostream>
#include <cmath>
using namespace std;

class Vector {
private:
    double x, y;

public:
    Vector(double xVal = 0, double yVal = 0) {
        x = xVal;
        y = yVal;
    }
    Vector operator+(const Vector& v) {
        return Vector(x + v.x, y + v.y);
    }
    Vector operator-(const Vector& v) {
        return Vector(x - v.x, y - v.y);
    }
    Vector operator*(double scalar) {
        return Vector(x * scalar, y * scalar);
    }
    Vector operator/(double scalar) {
        if (scalar == 0) {
            cout << "Division by zero error!" << endl;
            return Vector(0, 0);
        }
        return Vector(x / scalar, y / scalar);
    }
    double magnitude() {
        return sqrt(x * x + y * y);
    }
    void display() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Vector v1(3, 4);
    Vector v2(1, 2);

    cout << "Vector v1: ";
    v1.display();

    cout << "Vector v2: ";
    v2.display();
    Vector v3 = v1 + v2;
    cout << "\nv1 + v2 = ";
    v3.display();
    Vector v4 = v1 - v2;
    cout << "v1 - v2 = ";
    v4.display();
    Vector v5 = v1 * 2;
    cout << "v1 * 2 = ";
    v5.display();
    Vector v6 = v1 / 2;
    cout << "v1 / 2 = ";
    v6.display();
    cout << "\nMagnitude of v1: " << v1.magnitude() << endl;
    cout << "Magnitude of v2: " << v2.magnitude() << endl;

    return 0;
}
