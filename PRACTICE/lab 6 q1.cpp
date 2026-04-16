#include <iostream>
using namespace std;
class Shape {
protected:
    int numberOfSides;
    double area;
public:
    Shape(int sides = 0) {
        numberOfSides = sides;
        area = 0;
    }
    int getNumberOfSides() {
        return numberOfSides;
    }

    double getArea() {
        return area;
    }
    void setNumberOfSides(int sides) {
        numberOfSides = sides;
    }

    void setArea(double a) {
        area = a;
    }
};
class Rectangle : public Shape {
protected:
    double length, width;

public:
    Rectangle(double l, double w) : Shape(4) {
        length = l;
        width = w;
    }

    void generateArea() {
        area = length * width;
    }
};


class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : Shape(0) {
        radius = r;
    }

    void generateArea() {
        area = 3.1416 * radius * radius;
    }
};
class Triangle : public Shape {
private:
    double height, base;

public:
    Triangle(double h, double b) : Shape(3) {
        height = h;
        base = b;
    }

    void generateArea() {
        area = (height * base) / 2;
    }
};
class Square : public Rectangle {
public:
    Square(double side) : Rectangle(side, side) {}
    bool checkSides() {
        return length == width;
    }

    void generateArea() {
        area = length * width;
    }
};
int main() {
    Rectangle r(5, 4);
    r.generateArea();
    cout << "Rectangle Area: " << r.getArea() << endl;

    Circle c(3);
    c.generateArea();
    cout << "Circle Area: " << c.getArea() << endl;

    Triangle t(6, 4);
    t.generateArea();
    cout << "Triangle Area: " << t.getArea() << endl;

    Square s(5);
    s.generateArea();
    cout << "Square Area: " << s.getArea() << endl;

    if (s.checkSides())
        cout << "Square sides are equal" << endl;

    return 0;
}
