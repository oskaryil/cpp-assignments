#include <iostream>
#include <vector>

using namespace std;

int main() {

  int antalSidor;
  int antalAvVarje[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  vector<int> sidNummer;

  cout << "Antal Sidor ? ";
  cin >> antalSidor;

  for(int i = 1; i < antalSidor+1; i++) {
    if(i % 2 != 0) {
      sidNummer.push_back(i);
    }
  }

  for(int i = 0; i < sidNummer.size(); i++) {
    int num = sidNummer[i];
    while(num > 0) {
      int digit = num % 10;
      num /= 10;
      switch(digit) {
        case 0:
          antalAvVarje[0] += 1;
          break;
        case 1:
          antalAvVarje[1] += 1;
          break;
        case 2:
          antalAvVarje[2] += 1;
          break;
        case 3: 
          antalAvVarje[3] += 1;
          break;
        case 4:
          antalAvVarje[4] += 1;
          break;
        case 5:
          antalAvVarje[5] += 1;
          break;
        case 6: 
          antalAvVarje[6] += 1;
          break;
        case 7:
          antalAvVarje[7] += 1;
          break;
        case 8:
          antalAvVarje[8] += 1;
          break;
        case 9:
          antalAvVarje[9] += 1;
          break;
      }
    }
  }

  for(int i = 0; i < 10; i++) {
    cout << antalAvVarje[i] << " ";
  }


  return 0;
}