#include <iostream>
using namespace std;

class Character
{
public:
  virtual void attack()
  {
    cout << "Attacking...\n";
  }
  virtual void power()
  {
    cout << "Using Power...\n";
  }
};

class Warrior : public Character
{
public:
  void attack() override
  {
    cout << "Warrior Attacking\n";
  }

  void power() override
  {
    cout << "Warrior Power\n";
  }
};

class Mage : public Character
{
public:
  void attack() override
  {
    cout << "Mage Attacking\n";
  }

  void power() override
  {
    cout << "Mage Power\n";
  }
};

class DamageCalculator
{
public:
  void calculateDamage(int bs)
  {
    cout << "Damage:" << bs << "\n";
  }
  void calculateDamage(int bs, int ss)
  {
    cout << "Damage:" << bs + ss << "\n";
  }
};

class Position
{
public:
  float x, y;

  Position()
  {
    x = y = 0;
  }

  Position(float a, float b)
  {
    x = a;
    y = b;
  }

  Position operator+(const Position &obj)
  {
    Position temp;
    temp.x = x + obj.x;
    temp.y = y + obj.y;
    return temp;
  }

  void display()
  {
    cout << "X: " << x << "\nY: " << y << "\n";
  }
};

int main()
{

  // Function Overriding
  Character *pokemon;
  pokemon = new Warrior;
  pokemon->attack();
  pokemon->power();
  pokemon = new Mage;
  pokemon->attack();
  pokemon->power();

  // Function Overloading
  DamageCalculator dCalc;
  dCalc.calculateDamage(10);     // it calls the function of name "calculateDamage" which has 1 parameter
  dCalc.calculateDamage(10, 20); // it calls the function of name "calculateDamage"  which has 2 parameter

  //  Operator Overloading

  Position p1(5, 7), p2(3, 4);
  Position p3 = p1 + p2;
  p3.display();

  return 0;
}
