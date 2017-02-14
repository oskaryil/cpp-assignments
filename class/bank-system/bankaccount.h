class BankAccount {
private:
  long long accountNumber;
  double accountBalance;
  std::string name;
public:
  BankAccount(long long number, double balance, std::string lastName) {
    accountNumber = number;
    accountBalance = balance;
    name = lastName;

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
  long long accNumber() {
    return accountNumber;
  }
  std::string getName() {
    return name;
  }
  void setBalance(double amount) {
    accountBalance = amount;
  }
  void transfer(BankAccount& bk, double amount) {
    if(bk.getBalance() - amount >= 0) {
      accountBalance += amount;
      bk.makeTransaction(-amount);
      
    } else {
      std::cout << "Balance is too low" << std::endl;
    }
  }
};