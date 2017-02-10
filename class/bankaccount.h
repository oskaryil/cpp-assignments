class BankAccount {
public:
  BankAccount(int number, double balance) {
    accountNumber = number;
    accountBalance = balance;
  }
  double getBalance() {
    return accountBalance;
  }
  double makeTransaction(double amount) {
    accountBalance += amount;
  }
  double deposit(double amount) {
    accountBalance += amount;
  }
  int accNumber() {
    return accountNumber;
  }
private:
  int accountNumber;
  double accountBalance;
};