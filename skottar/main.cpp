#include <iostream>
#include <vector>

using namespace std;

int main() {

  vector<int> skottar;
  vector<int> input;
  vector<int> before2000;
  vector<int> after2000;
  

  for(int i = 0; i < 10; i++) {
    int arinput;
    cout << "Skriv in år [" << i+1 << "]:";
    cin >> arinput;
    input.push_back(arinput);
    if(arinput % 4 == 0) {
      skottar.push_back(arinput);
      if(arinput < 2000) {
        before2000.push_back(arinput);
      } else {
        after2000.push_back(arinput);
      }
    } 
  }

  if(skottar.size() > 0) {
    
    cout << "Dessa är skottår: " << endl;

    for (int i = 0; i < skottar.size(); i++) {
      cout << skottar[i] << " ";
    }
    cout << endl;
  }


  return 0;
}
