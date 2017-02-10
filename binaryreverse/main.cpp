#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {

  int firstDecimal, convertDecimal;
  cout << "Number to be reversed: ";
  cin >> firstDecimal;

  vector<int> convertedBinary;

  while(firstDecimal > 0) {
    int binaryDigit = firstDecimal % 2;
    firstDecimal /= 2;
    convertedBinary.push_back(binaryDigit);
  }

  int base = 2;
  int length = convertedBinary.size();
  int total = 0;

  for(int i = 0; i < convertedBinary.size(); i++) {
    switch(convertedBinary[i]) {
      case 0: 
        total += 0;
        break;
      case 1:
        total += pow(base, length-1);
        break;
    }
    length--;
  }
  convertDecimal = total;

  cout << "Reversed: " << convertDecimal << endl;

  return 0;
}