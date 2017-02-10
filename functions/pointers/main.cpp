#include <iostream>

using namespace std;

int main() {

  int *ipek;
  int one = 1;
  // ipek = new int; // Unnecessary in this case.
  ipek = &one;


  cout << "Value of variable: " << one << endl;
  cout << "Adress stored in ipek variable: " << ipek << endl;
  cout << "Value of *ipek variable: " << *ipek << endl;

  // delete ipek;

  return 0;
}