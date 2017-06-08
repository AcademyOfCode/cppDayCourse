#include <iostream>

using namespace std;


/*int main() {
  int aNumber = 10;
  int *aPointerToANumber = &aNumber;
  *aPointerToANumber = 12;
  aNumber = *aPointerToANumber;


  cout << aNumber << endl;
  cout << "Memory address of number " << aPointerToANumber << endl;
  cout << "Value of number " << *aPointerToANumber << endl;

  cout << "Enter Number" << endl;
  cin >> aNumber;


  cout << aNumber << endl;
  cout << "Memory address of number " << aPointerToANumber << endl;
  cout << "Value of number " << *aPointerToANumber << endl;

  cout << "HI";



}*/


// int main() {
//   int aNumber = 10;
//   int *aPointer;       //A pointer to an integer
//   aPointer = &aNumber; //aPointer is assigned the address of aNumber
//
//   cout << aNumber << endl;
//   cout << aPointer << endl;  //Memory address
//   cout << *aPointer << endl; //Contents of memory address
// }



int main() {
  int aNumber = 10;
  int *aPointer;
  aPointer = &aNumber;
  *aPointer = 20;
  cout << aNumber << endl;
}
