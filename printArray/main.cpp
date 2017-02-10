#include <iostream>

using namespace std;

int main() {


  int tal[] = {3, 78, 12, 92, 11};

  int storlek = sizeof(tal)/sizeof(int);

  for(int i = 0; i < storlek; i++) {
    cout << tal[i] << endl; 
  }

  return 0
}