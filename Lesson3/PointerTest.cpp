#include <iostream>

using namespace std;

int main() {
  int aNumber = 10;
  int *aPointer;
  aPointer = &aNumber;
  cout << aNumber << endl;
  cout << *aPointer << endl;
}


// #include <iostream>
//
// using namespace std;
//
// int main() {
//   int aNumber = 10;
//   //int *aPointer;       //A pointer to an integer
//   //aPointer = &aNumber; //aPointer is assigned the address of aNumber
//
//   cout << &aNumber << endl;
//   //cout << aPointer << endl;  //Memory address
//   //cout << *aPointer << endl; //Contents of memory address
// }
