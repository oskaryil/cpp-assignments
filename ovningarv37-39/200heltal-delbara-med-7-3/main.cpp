/*
Bestämma och skriv ut alla positiva heltal som är mindre än 200, och som är delbara både

med 3 och med 7.
*/

#include <iostream>

using namespace std;

int main() {

  for(int i = 0; i < 200; i++) {
    if(i%3 == 0 && i%7 == 0) {
      cout << i << endl;
    }
  }


  return 0;
}