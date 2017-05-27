
#pragma once
const int n = 10;

#include <string>

using namespace std;

class NPC {
public:
  int skill;
  int strength;

  NPC();
  NPC(int _skill, int _strength);

  int attack();
  int defend();
  bool isAlive();

  void printOutStats();


  void addGrade(int grade);
  void changeGrade(int grade, int pos);
  void removeGrade(int pos);
  int getNumOfGrades();
  int averageMark();
  void printOutGrades();
};
