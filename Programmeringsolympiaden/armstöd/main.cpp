#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isTaken(int chairNumber, int preferens) {
  
}

int main() {

  int antalPersoner;
  int happyPersons = 0;
  string preferenser;
  int chairs[antalPersoner];
  string preferensDefintion[5][1] = {}
  cout << "Antal personer ? ";
  cin >> antalPersoner;
  cout << "Preferenser ? ";
  cin.ignore();
  getline(cin, preferenser);

  int armstod[2];

  for(int i = 0; i < strlen(preferenser); i++) {
    switch(preferenser[i]) {
      case "V":
        armstod[0] = 1;
        armstod[1] = 0;
        break;
      case "H":
        armstod[0] = 0;
        armstod[1] = 1;
        break;
      case "A":
        
        break;
      case "B":
        break;
      case "I":
        break;
    }
  }




  return 0;
}