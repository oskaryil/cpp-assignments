#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

  int amountLetters, antalRegler;
  string alphabet = "ABCDEFGHIJKLMONPQRSTUVXYZ";
  cout << "Antal bokstäver ? ";
  cin >> amountLetters;
  cout << "Antal regler ? ";
  cin >> antalRegler;
  vector<string> regler(antalRegler);

  string limitedRange = alphabet.substr(0, amountLetters);
  cout << limitedRange << endl;

  for(int i = 0; i < antalRegler; i++) {
    cout << "Regel " << i+1 << " ? ";
    cin >> regler[i];
  }


  






  return 0;
}