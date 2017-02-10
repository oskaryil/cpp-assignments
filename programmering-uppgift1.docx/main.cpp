/*
En tabell innehåller n st olika tal. Konstruera en algoritm som söker igenom tabellen och som

letar upp det minsta talet. Algoritmen skall som resultat ge det minsta talets

positionsnummer i tabellen (ett index mellan 1 och n).
*/

#include <iostream>

using namespace std;



int main() {

  int numbers[] = {5, 3, 18, 1, 4, 99, 10};

  int smallest = numbers[0];

  for(int i = 1; i < sizeof(numbers)/sizeof(numbers[0]); ++i) {
    if(numbers[i] < smallest) {
      smallest = numbers[i];
    }
  }

  cout << smallest << endl;

  return 0;
}
