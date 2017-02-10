#include <iostream>

using namespace std;

int main() {
  int days;
  cout << "Antal dagar: ";
  cin >> days;
  int mognaCherimoyor[days];
  for(int i = 0; i < days; i++) { 
    cout << "Mognar dag " << i+1 << " ? ";
    cin >> mognaCherimoyor[i];
  }

  int points = 0;
  int cherimoyorPerDay[days][10];

  for(int i = 0; i < mognaCherimoyor.size(); i++) {
    int mogna = mognaCherimoyor[i] / 3;
    for(int j = 0; j < mogna; j++) {
      cherimoyorPerDay[j]
    }
  }




  return 0;
}