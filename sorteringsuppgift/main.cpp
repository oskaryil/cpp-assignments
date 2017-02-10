#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;


int main() {


  int length;
  ifstream infile;
  infile.open("numbers.txt", ios::binary);
  infile.seekg(0, ios::end);
  length = infile.tellg();
  infile.seekg(0, ios::beg);
  vector<char> inputtList(length);
  vector<unsigned> num
  for(int a0=0;a0<length;a0++){

    infile >> inputtList[a0];
    cout << inputtList[a0];
  }

  cout << inputtList[0];

  // int data[length];
  // for(int i = 0; i < length; i++) {
  //   infile >> data[i];
  // }



  // cout << infile << endl;
  cout << "length: " << length << endl;

  // string fileArray[3000];

  // for(int i = 0; i < 3000; i++) {
  //   infile >> data[i];
  //   cout << data[i];
  // }

  // int amount = 5;
  // int *numbers = new int[amount];
  // cout << *numbers << endl;

  cout << "Reading from the file" << endl;
  int num;
  // for(int i = 0; i < infile.size(); i++) {
  //   infile[i] >> data[i];
  // }
  // infile >> data;
  // cout << data;

  infile.close();

  return 0;
}