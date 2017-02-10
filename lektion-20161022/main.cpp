#include <iostream>
#include <string>

using namespace std;


void namn() {
  string namn;
  cout << "Vad heter du? Förnamn och efternamn: ";
  //vi använder inte cin
  getline(cin, namn);
  cout << namn << " är ett fint namn!" << endl;
}

void personNr() {
  string personNummer;
  cout << "Skriv in ditt personnr 10 eller 12 siffror: ";
  getline(cin, personNummer);

  string lastFour;

  if(personNummer.size() == 10) {
    string fourLast = personNummer.substr(6, 9);
    string first = personNummer.substr(0, 6);
    cout << "19" << first << "-" << fourLast << endl;
    lastFour = fourLast;
    if(lastFour[2] % 2 == 0) {
    cout << "Gender: Female" << endl;
    } else if(lastFour[2] % 2 != 0) {
    cout << "Gender: Male" << endl;
    }
  } else if(personNummer.size() == 12) {
    string fourLast = personNummer.substr(8, 11);
    string first = personNummer.substr(0, 8);
    cout << first << "-" << fourLast << endl;
    lastFour = fourLast;
    if(lastFour[2] % 2 == 0) {
    cout << "Gender: Female" << endl;
    } else if(lastFour[2] % 2 != 0) {
    cout << "Gender: Male" << endl;
    }
  }


}

int main() {

  bool run = true;
  int choice;
  cout << "Pick a program to run" << endl;
  cout << "1: Personnr" << endl;
  cin >> choice;

  do {

    switch(choice) {
      case 1: 
        personNr();
        break;
    }

  } while(run);

  // personNr();
  return 0;
}
