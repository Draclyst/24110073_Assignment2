#include <iostream>
using namespace std;
class Account { //blueprint for account attributes and methods
    public:
    string ownerName;  
    double balance; 
    void deposit(double amount){
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }
    void withdraw(double amount){
        if (amount >balance){
            cout<< "Insufficient amount!"<<endl;
        } else if (balance - amount < 100) {
            cout << "About to go lower than minimal amount! Transaction cancelled!" << endl; //displays warning when balance is lower than 100
        } else {
            balance -= amount;
            cout << "Withdrawn: " << amount<< endl;
        }
    }
    void displayBalance(){
        cout<<"Owner:"<<ownerName<<", Current balance:"<<balance<<endl;
    } // displayBalance, ownerName and balance bundled in class Account (encapsulation)
};
int main(){
    Account accounts;
    accounts.ownerName = "24110073";
    accounts.balance = 465;
    accounts.deposit(100);
    accounts.displayBalance();
    accounts.withdraw(500);
    accounts.displayBalance();
    accounts.withdraw(465);
    accounts.displayBalance();
    return 0;
}