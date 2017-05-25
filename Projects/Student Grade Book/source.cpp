#include "StudentList.hpp"
#include <iostream>

using namespace std;


int main() {
	StudentList *list = new StudentList();
  int marks[5] = {10, 20, 30, 40, 50};

  Student *newStudent = new Student("Daire", marks, 5);
  //Student *newStudent = new Student();
  cout << "Student " << newStudent->name << endl;
  cout << newStudent->getNumOfGrades() << " Grades, Average Mark " << newStudent->averageMark() << endl;
  //newStudent->printOutGrades();

  newStudent->addGrade(60);
  newStudent->printOutGrades();
  newStudent->changeGrade(60, 0);
  newStudent->printOutGrades();
  newStudent->removeGrade(1);
  newStudent->printOutGrades();

  cout << "Student " << newStudent->name << endl;
  cout << newStudent->getNumOfGrades() << " Grades, Average Mark " << newStudent->averageMark() << endl;

  list->addStudentToStart(newStudent);
  list->printStudentList();

  int marks1[3] = {20, 20, 10};
  cout << list->linkedListLength() << endl;
  list->addStudentToEnd(new Student("Diarmuid", marks1 , 3));
  cout << list->linkedListLength() << endl;
  list->printStudentList();

  list->addStudentToPos(new Student("Mark", marks1 , 3), 2);
  list->printStudentList();
  cout << endl;

  list->removeNode("Diarmuid");
  list->printStudentList();

}
