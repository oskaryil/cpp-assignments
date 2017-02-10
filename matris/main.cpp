#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {

  int rad = 4;
  int kolumn = 4;
  int randomNum;

  srand (time(NULL)); 

  int matris[kolumn][rad];
  int columnSums[kolumn];

  for(int i = 0; i < kolumn; i++) {

    for(int j = 0; j < rad; j++) {
      randomNum = rand() % 10 +1;
      matris[i][j] = randomNum;
    }
  }
    int sumRows = 0;
    int sumColumns = 0;

  cout << "-----------------" << endl;

  for(int i = 0; i < kolumn; i++) {

    for(int j = 0; j < rad; j++) {
      setw(5);

      sumRows += matris[i][j];
      sumColumns += matris[j][i];
      if(j == 0) {
        cout << "| ";
      }
      cout << matris[i][j] << " | ";
    }

    cout << "ROW SUM: " << sumRows;
    cout << endl;
    cout << "-----------------";
    columnSums[i] = sumColumns;
    sumColumns = 0;
    sumRows = 0;
    cout << endl;

  }

  cout << "   COLUMN SUMS   " << endl;

  for(int i = 0; i < kolumn; i++) {
    if(i == 0) {
      cout << "| ";
      cout << columnSums[i] << "  ";
    } else if(i == 3) {
      cout << columnSums[i] << " ";
      cout << "|";
    } else {
      cout << columnSums[i] << "  ";
      
    }
  }
  cout << endl;

  return 0;
}
