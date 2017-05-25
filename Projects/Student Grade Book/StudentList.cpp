#include <StudentList.hpp>
#include <iostream>
#include <String>

using namespace std;

StudentList::StudentList() {
  head = NULL;
}

void StudentList::addStudentToStart(Student *student) {
  Node *newNode = new Node;
  newNode->student = student;

  if (head == NULL) {
    head = newNode;
  }
  else {
    newNode->next = head;
    head = newNode;
  }
}

void StudentList::addStudentToEnd(Student *student) {
  Node *newNode = new Node;
  newNode->student = student;

  Node *current = head;
  if (head == NULL) {
    head = newNode;
    return;
  }
  while (current->next != NULL) {
    current = current->next;
  }
  current->next = newNode;
  return;
}

void StudentList::addStudentToPos(Student *student) {
  Node *newNode = new Node;
  newNode->student = student;

  Node *current = head;
  Node *prev = NULL;
  for (int i = 0; i < pos; i++) {
    if (current == NULL) {
      cout << "Position is out of bounds" << endl;
      return;
    }
    else {
      prev = current;
      current = current->next;
    }
  }
}

void StudentList::removeNode(String name) {
  Node *current = head;
  Node *prev = NULL;
  while (current != NULL) {
    if (current->student->name.compare(name) == 0) {
      if (current == head) {
        head = current->next;
      }
      else {
        prev->next = current->next;
      }
      delete current;
      return;
    }
    else {
      prev = current;
      current = current->next;
    }
  }
  cout << "This name is not in the class list" << endl;
  return;
}

void StudentList::printStudentList() {
  Node *current = head;
  while (current != NULL) {
    cout << current->student->name << endl;
    current = current->next;
  }
}

int StudentList::linkedListLength() {
  Node *current = head;
  int count = 0;
  while (current != NULL) {
    count++;
    current = current->next;
  }
  return count;
}
