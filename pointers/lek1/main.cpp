#include <iostream>
#include <string>

using namespace std;

void reverseString(char *input) {
  for(int i = *input.size(); i > -1; i--) {
    cout << *input[i];
  }
}

int main() {

  char[] hello = "hello";



  reverseString(&hello);

  return 0;
}

