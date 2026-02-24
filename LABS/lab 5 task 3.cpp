#include<iostream>
using namespace std;

class Weapons{
public:
void WeaponsDescription(){cout<<"Weapons are tools used for defense or attack."<<endl;}
};

class HotWeapons:public Weapons{
public:
void HotWeaponsDescription(){cout<<"Hot weapons use heat, fire, or gunpowder to function."<<endl;}
};

class Bombs:public HotWeapons{
public:
void BombsDescription(){cout<<"Bombs explode and cause destruction over an area."<<endl;}
};

class NuclearBombs:public Bombs{
public:
void NuclearBombsDescription(){cout<<"Nuclear bombs explode with massive force using nuclear fission and fusion."<<endl;}
};

int main(){
NuclearBombs nb;
nb.WeaponsDescription();
nb.HotWeaponsDescription();
nb.BombsDescription();
nb.NuclearBombsDescription();
return 0;
}
