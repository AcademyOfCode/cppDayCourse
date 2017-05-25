#pragma once
#include <Student.hpp>

using namespace std;

struct Node {
  Student *student;
  Node *next;
}

class StudentList {
public:
  Node *head;

  StudentList();

  void addStudentToStart(Student *student);
  void addStudentToEnd(Student *student);
  void addStudentToPos(Student *student);
  void removeNode(String name);
  void printStudentList();
  int linkedListLength();


}
