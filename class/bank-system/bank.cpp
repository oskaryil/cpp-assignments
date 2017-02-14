// Author: Oskar Yildiz
// Version: 1.0.0 
// Assignment: Bankaccount Main

#include <iostream>
#include "bankaccount.h"
#include <string>

using namespace std;

void menu() {

    cout << "Welcome to Bank la Oskar in Madrid" << endl;
    cout << "What can we do for you today?" << endl;
    cout << "-------------------------------------" << endl;
    cout << "1: Open an account" << endl;
    cout << "2: Deposit money" << endl;
    cout << "3: Withdraw Money" << endl;
    cout << "4: Check account balance" << endl;
    cout << "5: Transfer Money" << endl;
    cout << "-------------------------------------" << endl;
}

int main() {

  // bool run = true;

  // do {
  //   menu();
  //   int choice;
  //   cout << "Choice: ";
  //   cin >> choice;
  //   switch(choice) {
  //     case 1:
  //       string name;
  //       long long personNr;
  //       cout << "---- Open an account ----" << endl;
  //       cout << "Last name: ";
  //       cin.ignore();
  //       getline(cin, name);
  //       cout << "Social security number: ";
  //       cin >> personNr;
  //       cout << "personnr: " << personNr << endl;
  //       BankAccount personOne(personNr, 0, name);
  //       cout << personOne.getName() << " " << "AccNumber " << personOne.accNumber() << endl;
  //       run = false;
  //       break;
  //     case 5:
  //       BankAccount personTwo(12345, 5000, "Oskar");
  //       personOne.transfer(&personTwo);
  //       cout << personOne.getBalance();
  //   }
  // } while(run);

  // First parameter is accountnumber, second parameter is initial account balance.
  // BankAccount Oskar(123456, 100); 

  // cout << "Current balance: " << Oskar.getBalance() << endl;
  // cout << "Adding 500" << endl;
  // Oskar.makeTransaction(500);
  // cout << "New Balance: " << Oskar.getBalance() << endl;

  BankAccount oskar(1234, 1000, "Oskar");
  BankAccount elise(123, 1000, "Elise");

  oskar.transfer(elise, 1000);

  cout << "oskar balance: " << oskar.getBalance() << endl;
  cout << "elise balance: " << elise.getBalance() << endl;
  return 0;
}