
#pragma once
const int n = 10;

#include <String>

class Student {
public:
  string name;
  int studentID;
  int grades[n];
  int numOfGrades;

  Student();
  Student(string _name, int *_grades, int _numOfGrades);
  void addGrade(int grade);
  void changeGrade(int grade, int pos);
  void removeGrade(int pos);
  int getNumOfGrades();
  int getAverageMark();
  int averageMark();

}
