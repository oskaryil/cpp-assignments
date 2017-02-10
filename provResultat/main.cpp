#include <iostream>

using namespace std;

int main() {

  double provResultat[] = {3.5, 27.2, 18.2, 28.2, 11.0, 15.5, 18.5, 17.5, 19.0};
  double best = provResultat[0];
  int storlek = sizeof(provResultat)/sizeof(double);
  for(int i = 1; i<storlek;i++) {
    if(provResultat[i] > best) {
      best = provResultat[i];
    }
  }
  cout << "Best result: " << endl;
  cout << best << endl;

  return 0;
}