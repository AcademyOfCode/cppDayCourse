#include <iostream>

using namespace std;

void pickNumber();

void exampleFunction();

int main() {
  exampleFunction();
}

void exampleFunction() {
  cout << "Example";
}

void pickNumber() {
  int aNumber;
  cout << "Pick a number?\n";
  cin >> aNumber;
  cout << "Is your number " << aNumber << "?";
}
