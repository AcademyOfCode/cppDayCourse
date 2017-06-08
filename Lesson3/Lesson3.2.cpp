#include <iostream>

using namespace std;

int main() {
  int a = 10;
  int b = 20;
  int *firstPointer;
  int *secondPointer;
  firstPointer = &a;
  secondPointer = &b;
  cout << "The first pointers value is " << *firstPointer << endl;
  cout << "The second pointers value is " << *secondPointer << endl;

  *firstPointer = 15;
  *secondPointer = 25;
  cout << "The values the pointers point to has been changed" << endl;

  cout << "The first pointers value is " << *firstPointer << endl;
  cout << "The second pointers value is " << *secondPointer << endl;

  firstPointer = &b;
  secondPointer = &a;

  cout << "The pointers now point to new values" << endl;
  cout << "The first pointers value is " << *firstPointer << endl;
  cout << "The second pointers value is " << *secondPointer << endl;

}
