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
};