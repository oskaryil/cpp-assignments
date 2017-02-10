#include <iostream>
#include <vector>

using namespace std;

void one() {
  int num = 2;
  for(int i = 0; i < 8; i++) {
    cout << num << endl;
    num += 2;
  }
}

void two() {
  // vector<double> numbers;
  double numbers[3];
  cout << "Please enter three decimal numbers: " << endl;
  double sum = 0;
  for(int i = 0; i < 3; i++) {
    cin >> numbers[i];
    sum += numbers[i];
    }
  cout << "Sum: " << sum << endl;
  cout << "Average: " << sum/3 << endl;
}

void three() {
  int heltal[4];
  for(int i = 0; i < 4; i++) {
    cout<<"Mata in fyra heltal: "<<endl;
    cin>>heltal[i];
    cout<<endl;
  }
  for(int i = 4; i >= 0; i--) {
  cout<<heltal[i]<<endl;
  cout<<endl;
  }
}

void four() {
  double firstNum, secondNum;
  cout << "Enter two numbers" << endl;
  cout << "Enter number 1: ";
  cin >> firstNum;
  cout << "Enter number 2: ";
  cin >> secondNum;
  for(int i = firstNum; i < secondNum; i++) {
    cout << i <<endl;
  }
  cout << secondNum << endl;
}

void five() {
  vector<int> numbers;
  for(int i = 1; i < 31; i++) {
    if(i % 3 == 0 && i % 7 == 0) {
      numbers.push_back(i);
    }
  }
  if(numbers.size() > 0) {
    for(int i = 0; i < numbers.size(); i++) {
      cout << numbers[i] << endl;
    }
  }
}

void six() {
  for(int x = -50; x <= 50; x++) 
  for(int y = -20; y <= 20; y++) {
    if((x * 3) - (y * 7) == 1) {
      cout << "x = " << x << " y = " << y <<  endl;
    }
  }
}

void seven() {
  
}

int main() {

  bool run = true;

  do {
    cout << "Pick a program" << endl;
    cout << "| 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | " << endl;
    int choice;
    cout << "Choice: ";
    cin >> choice;
    switch(choice) {
      case 1:
        one();
        break;
      case 2:
        two();
        break;
      case 3:
        three();
        break;
      case 4:
        four();
        break;
      case 5: 
        five();
        break;
      case 6: 
        six();
        break;
      default:
        cout << "Please enter a valid choice" << endl;
        break;
    }

  } while(run);

  return 0;
}