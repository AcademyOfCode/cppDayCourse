#include <iostream>
#include <stdlib.h>

using namespace std;

// struct Example {
//   int a;
//   int b;
// };
//
// class ExampleClass {
//   int a;
//   int b;
//
//   ExampleClass(int _a, int _b) {
//     a = _a;
//     b = _b;
//   }
//
//   void printValues() {
//     cout << a << " " << b << endl;
//   }
// };


struct Enemy {
  int life;
};

class Player {
  int health;
  int attack;

public:
  Player(int _health, int _attack) {
    health = _health;
    attack = _attack;
  };
  int attackEnemy() {
    return attack * (rand()%10);
  }


};



int main() {
  Enemy goblin;
  goblin.life = 10;
  Enemy orc;
  orc.life = 7;
  Player hero(5, 1);
  int damage;
  srand(20);
  while(goblin.life > 0) {
    cout << "Hero attacks goblin!" << endl;
    damage = hero.attackEnemy();
    cout << "goblin has " << goblin.life << " life" << endl;
    goblin.life -= damage;
    cout << "Hero dealt " << damage << " damage to goblin" << endl;
    if (goblin.life <= 0) {
      cout << "Hero slayed the goblin!" << endl;
    }
  }

  while(orc.life > 0) {
    cout << "Hero attacks orc!" << endl;
    damage = hero.attackEnemy();
    cout << "orc has " << orc.life << " life" << endl;
    orc.life -= damage;
    cout << "Hero dealt " << damage << " damage to orc" << endl;
    if (orc.life <= 0) {
      cout << "Hero slayed the orc!" << endl;
    }
  }
}




// class Human {
// public:
//   string name;
// private:
//   int age;
// }
// Human teacher;
// teacher.name = "Mark";
// teacher.age = 22;

// class Student {
// public:
//   string name;
//   int getStudentID();
//   void setStudentID(int _studentID);
// private:
//   int studentID;
// };
//
// int Student::getStudentID() {
//   return studentID;
// }
//
// void Student::setStudentID(int _studentID) {
//   studentID = _studentID;
// }
