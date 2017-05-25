#include <Student.hpp>
#include <string>

using namespace std;

Student::Student() {

}

Student::Student(string _name, int *_grades, int _numOfGrades) {
  name = _name;
  grades = _grades;
  numOfGrades = _numOfGrades;
}

void Student::addGrade(int grade) {
  if (numOfGrades >= n) {
    cout << "Grade book is full" << endl;
  }
  else {
    grades[numOfGrades] = grade;
    numOfGrades++;
  }

}

void Student::changeGrade(int grade, int pos) {
  if (pos >= numOfGrades) {
    cout << "Error index out of bounds" << endl;
  }
  else {
    grades[pos] = grade;
  }
}

void Student::removeGrade(int pos) {
  for (int i = pos; i < numOfGrades-1; i++) {
    grades[i] = grades[i+1];
  }
  numOfGrades--;
}

int Student::getNumOfGrades() {
  return numOfGrades;
}

int Student::getAverageMark() {
  return averageMark;
}

int Student::averageMark() {
  int totalMarks = 0;
  for (int i = 0; i < numOfGrades; i++) {
    totalMarks += grades[i];
  }
  int averageMark = int(totalMarks/numOfGrades);
  return averageMark;
}
