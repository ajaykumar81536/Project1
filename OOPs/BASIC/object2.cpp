#include<iostream>
using namespace std;

class Hero {
  public: 
  int health;
  char level;

  Hero () {
    cout<<"simple constructor called" <<endl;

  }
// paramerterised Constructor
Hero(int health) {
    this -> health = health;
}

Hero (int health, char level) {
    this -> health = health;
    this -> level = level; 
}
void setHealth(int health){
     this -> health = health;
}

void setLevel(char level){
    this-> level = level;
}

void Printing(){
    cout<<"health : "<<this ->health <<endl;
    cout<<"level : "<<this ->level <<endl;
}
};

int main() {

    Hero ramesh(55, 'C');
    Hero h1;
    cout<<"ramesh : "<< ramesh.health <<" "<< ramesh.level<<endl;

// copy object ramesh 
Hero R(ramesh);
cout<< "R : "<< R.health << " " << R.level<<endl;

// updating the valueof health and level
cout<<"Ramesh"<<endl;

ramesh.setHealth(45);
ramesh.setLevel('B');
ramesh.Printing();

cout<<"Hero H1"<<endl;
h1.setHealth(18);
h1.setLevel('A');
h1.Printing();

// copy object Hero H1 into ramesh
Hero H2(h1);
cout<<"H2 :";
H2.Printing();
cout<<"h1 :";
h1.Printing();




}