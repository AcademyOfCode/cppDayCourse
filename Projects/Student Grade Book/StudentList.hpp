#pragma once
#include "Student.hpp"
#include <String>

using namespace std;

struct Node {
  Student *student;
  Node *next;
};

class StudentList {
public:
  Node *head;

  StudentList();

  void addStudentToStart(Student *student);
  void addStudentToEnd(Student *student);
  void addStudentToPos(Student *student, int pos);
  void removeNode(string name);
  void printStudentList();
  int linkedListLength();


};
