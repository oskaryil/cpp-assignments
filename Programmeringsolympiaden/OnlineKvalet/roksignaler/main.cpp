#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

// bool IsOdd (int i) { return ((i%2)==1); }

// vector<string> split(string str, char delimiter) {
//   vector<string> internal;
//   stringstream ss(str); // Turn the string into a stream.
//   string tok;
  
//   while(getline(ss, tok, delimiter)) {
//     internal.push_back(tok);
//   }
  
//   return internal;
// }

int main() {


  int S, P, T, B, M, N;
  string morsecode;
  string finalWord;
  string alphabet[26];
  string definitions[26]; 
  // vector<char> morseRaw[N];
  for(int i = 0; i < 26; i++) {
    string definitionInput;
    getline(cin, definitionInput);
    alphabet[i] = definitionInput.substr(0, 1);
    definitions[i] = definitionInput.substr(1, definitionInput.size());
  } 

  for(int i = 0; i < 26; i++) {
    cout << alphabet[i] << " " << definitions[i] << endl;

  }
  cin >> S >> P;
  cin >> T >> B >> M;
  cin >> N >> morsecode;

  // cout << morsecode << endl;

  // while(morsecode.size() > 0) {
    
  // }

  // for(int i = 0; i < morsecode.length(); i++) {
  //   morseRaw[i] = morsecode[i];
  //   cout << morseRaw[i];
  // }

  string nyBokstav = "";
  string streck = "";
  string punkt  = "";
  string paus  = "";
  string mellanslag  = "";
  for(int i = 0; i < B; i++) {
    nyBokstav += "0";
  }

  for(int i = 0; i < S; i++) {
    streck += "1";    
  }

  for(int i = 0; i < P; i++) {
    punkt += "1";
  }

  for(int i = 0; i < T; i++) {
    paus += "0";
  }

  for(int i = 0; i < M; i++) {
    mellanslag += "0";
  }


  // cout << morsecode << endl;
  // string s = morsecode;
  // int i = stoi(morsecode);
  // cout << count_if(morseRaw.begin(), morseRaw.end(), IsOdd) << endl;

  string pause = "";
  string newLetter = "";
  newLetter.insert(0, B, '0');
  pause.insert(0, T, '0');
  cout << "PAUSE: " << pause << endl;
  cout << "NEW LETTER: " << newLetter << endl;

  vector<string> sep = split(morsecode, pause);

  // istringstream ss(morsecode);
  // string token;

  // while(istream::getline(ss, token, nyBokstav[0])) {
  //   cout << token << endl;
  // }

  // string firstLetter = morsecode.substr(0, morsecode.find(nyBokstav));
  // string secondLetter = morsecode.substr(firstLetter.size(), morsecode.find(nyBokstav));
  // cout << nyBokstav << endl;
  // cout << "RESULT " << firstLetter << endl;
  // cout << "SECOND LETTER " << secondLetter << endl;

  // for(int i = 0; i < firstLetter; i++) {
  //   string s = firstLetter.substr(0, firstLetter.find(streck));
  //   string p = firstLetter.substr(0, firstLetter.find(punkt));

  // }

  // for(int i = 0; i < 26; i++) {
  //   cout << alphabet[i] << " " << definitions[i] << endl;
  // }



  return 0;
} 