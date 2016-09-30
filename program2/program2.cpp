// Jamie Hayes
#include <iostream>
using namespace std;

// Program #2 example#1 bank deposite, withdraw, and balance

// declaration of classBankProgATM
// US currency dollars
class BankProgATM {
    private: 
    int deposite;
    int withdraw;
    int balance;
    
    public:
    BankProgATM(); // defult constructor
    BankProgATM(int userBankAccount);// overloaded constructor
    
    void SetDeposite(int userBankAccount); // mutator
    void SetWithdraw(int userBankAccount);
    
    int GetDeposite(); 
    int Getwithdraw();
    int GetCurrentBalance();
    
    void PrintBankStatement(); // print
};

BankProgATM::BankProgATM() {
    deposite = 0;
    withdraw = 0;
    balance = 0;
    int userBankAccount = 0;
}
   
BankProgATM::BankProgATM(int userBankAccount) {
    deposite = userBankAccount;
    withdraw = userBankAccount;
    balance = deposite - withdraw;
}  

void BankProgATM::SetDeposite(int userBankAccount) {
    deposite = userBankAccount;
    balance = deposite = balance;
}

// calculate new balance
void BankProgATM::SetWithdraw(int userBankAccount) {
    withdraw = userBankAccount;
    balance = balance - withdraw;
}

int BankProgATM::GetDeposite() {
    return deposite;
}

int BankProgATM::Getwithdraw() {
    return withdraw;
}
 // current balance statement
int BankProgATM::GetCurrentBalance() {
    if (balance < 0) {
        cout << "error message: overdrawn amount";
        cout << endl;
        
        return balance;
    }
}
void BankProgATM::PrintBankStatement() {
    cout << "Bank statement: " << endl;
    cout << "Deposite: " << GetDeposite() << endl;
    cout << "Withdraw: " << Getwithdraw() << endl;
    cout << "Current Balance: " << GetCurrentBalance() << endl;
    cout << endl;
}

int main () {
    BankProgATM trans1;
    trans1.PrintBankStatement();
    
    BankProgATM trans2;
    trans2.PrintBankStatement();
    
    trans1.SetDeposite(100);
    cout <<"Deposite: " << trans1.GetDeposite() << endl;
    trans1.SetWithdraw(20);
    cout << "withdraw: "<<trans1.Getwithdraw() <<endl;
    trans1.PrintBankStatement();
    
   trans1.SetWithdraw(60);
   cout << "withdraw: "<<trans1.Getwithdraw() <<endl;
   trans1.SetWithdraw(40);
   cout << "withdraw: " << trans1.Getwithdraw() <<endl;
   trans1.PrintBankStatement();
   
   return 0;
}