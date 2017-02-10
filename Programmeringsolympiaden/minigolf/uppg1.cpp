#include <iostream>

using namespace std;

int main() {
  int antalBanor;
  cout << "Antal banor ? ";
  cin >> antalBanor;
  if(antalBanor >= 2 && antalBanor <= 10) {

    int slagPerBana[antalBanor];
    int points = 0;
    int par = 0;
    int slag = 0;

    for(int i = 0; i < antalBanor; i++) {
      cout << "Bana " << i+1 << " ? ";
      cin >> slagPerBana[i];
    }

    for(int i = 1; i < antalBanor+1; i++) {
      if(slagPerBana[i-1] > 7) {
        slagPerBana[i-1] = 7;
      }
      if(i % 2 != 0) {
        par += 2;
        slag += slagPerBana[i-1];
      } else if(i % 2 == 0) {
        par += 3;
        slag += slagPerBana[i-1];
      }
    }
    points = slag - par;
    cout << "Resultat: " << points << endl;
  } else {
    cout << "Antal banor måste vara större än 2 och mindre än 10" << endl;
  }

  return 0;
}