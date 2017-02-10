// Author: Oskar Yildiz
// Version: 1.0.0 
// Assignment: Bankaccount Main

#include <iostream>
#include "bankaccount.h"
#include <string>

using namespace std;

int main() {


  do {

    string name;
    cout << "Welcome to Bank la Oskar in Madrid" << endl;
    cout << "What's your name: ";
    getline(cin, name);
    cout << "What can we do for you today?" << endl;
    cout << "-------------------------------------" << endl;
    cout << "1: Open an account" << endl;
    cout << "2: Deposit money" << endl;
    cout << "3: Withdraw Money" << endl;
    cout << "4: Check account balance" << endl;
    cout << "5: Transfer Money" << endl;
    cout << "-------------------------------------" << endl;
    int choice;
    cin >> choice;
    switch(choice) {
      case 1: {
        int accountNum;
        cout << "Desired account number: ";
        cin >> accountNum;
        BankAccount Name(accountNum, 0);
        cout << "New account created with account number: " << accountNum << endl;
        cout << "Current Balance: " << Name.getBalance() << endl;
        cout << endl;
        break;   
      }
      case 2: {
        double depositAmount;
        cout << "What's the amount that you'd like to deposit: ";
        cin >> depositAmount;
        cout << depositAmount << " has been added to your account with the number: " << Name.accNumber() << endl;
        cout << endl;
        break;
      }
      case 3:
        break;
      case 4:
        break;
      case 5:
        break;
      default:
        cout << "That choice is not valid!" << endl;
        break;
    }
  } while(true);
  // First parameter is accountnumber, second parameter is initial account balance.
  // BankAccount Oskar(123456, 100); 

  // cout << "Current balance: " << Oskar.getBalance() << endl;
  // cout << "Adding 500" << endl;
  // Oskar.makeTransaction(500);
  // cout << "New Balance: " << Oskar.getBalance() << endl;
  return 0;
}