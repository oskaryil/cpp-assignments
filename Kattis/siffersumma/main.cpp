#include <iostream>

using namespace std;

int main() {


  int siffersumma = 0;
  int N;
  cout << "N: ";
  cin >> N;
  int digitNum = N;
  while(digitNum > 0) {
    int digit = digitNum%10;
    digitNum /= 10;
    siffersumma += digit;
  }

  // cout << "FIRST Siffersumma: " << siffersumma << endl;

  int secondSifferSumma = 0;
  int number = N;
  while(secondSifferSumma != siffersumma) {
    int tempnum = number+1;
    while(tempnum > 0) {
      int digit = tempnum%10;
      tempnum /= 10;
      secondSifferSumma += digit;
    }
    if(secondSifferSumma != siffersumma) {
      secondSifferSumma = 0;
    }
    number++;
  }

  // cout << "SECOND Siffersumma: " << secondSifferSumma << endl;
  cout << "NUMBER: " << number << endl;
  return 0;
}