#include <iostream>
#include <vector>

using namespace std;

int main() {


  int weeks;
  cout << "Weeks: ";
  cin >> weeks;

  int empty, missed;

  if(weeks <= 9 && weeks >= 1) {
    vector<int> lectures(weeks);
    cout << "Schecduled lectures separated with a space" << endl;
    for(int i = 0; i < lectures.size(); i++) {
      cin >> lectures[i];
    }

    for(int i = 0; i < lectures.size(); i++) {
      cout << "for loop" << endl;
      switch(i) {
        case 2: 
          missed += lectures[i] - lectures[i-1];
          cout << missed << endl;
          break;
        case 3:
          empty += lectures[i-1] - lectures[i];
          cout << empty << endl;
          break;
        case 4:
          if((lectures[i] - lectures[i-1]))
          missed += lectures[i] - lectures[i-1];
      }
    }
    cout << empty << " " << missed << endl;
    
  } else {
    cout << "Maximum 9 weeks" << endl;
    cin >> weeks;
  }





  return 0;

}