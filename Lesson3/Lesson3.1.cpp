#include <iostream>

using namespace std;


int main() {
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



}
