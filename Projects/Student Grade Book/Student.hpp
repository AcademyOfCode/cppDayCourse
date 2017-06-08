
#pragma once
const int n = 10;

#include <string>

using namespace std;

class Student {
public:
  string name;
  int studentID;
  int grades[n];
  int numOfGrades;

  Student();
  Student(string _name, int _grades[], int _numOfGrades);
  void addGrade(int grade);
  void changeGrade(int grade, int pos);
  void removeGrade(int pos);
  int getNumOfGrades();
  int averageMark();
  void printOutGrades();
};







class Student {
public:
  string name;
  int getStudentID();
  void setStudentID(int _studentID);
private:
  int studentID;
};

int Student::getStudentID() {
  return studentID;
}

void setStudentID(int _studentID) {
  studentID = _studentID;
}

Student student;
student.name = "John":
student.setStudentID(12345);
cout << student.getStudentID();
