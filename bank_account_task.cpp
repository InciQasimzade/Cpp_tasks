#include <iostream>
using namespace std;

class BankAccount {	
	private:
		string ownerName;
		double balance = 0;
	
	public:
		BankAccount(){
			ownerName = "Unknown";
		}
	
		BankAccount(string ownerName1){
			ownerName = ownerName1;
		}
		
		void deposit(double amount){
			balance += amount;
		}
		
		double getBalance(){
			return balance;
		}
		
		void withdraw(double amount) {
        if (amount >= 0 && amount <= balance) {
            balance -= amount;
			}
    	}
		
		string getOwnerName(){
			return ownerName;
		}
};

int main(){
	BankAccount person1("Ali");
	person1.deposit(134);
	person1.withdraw(23);
	cout<<person1.getOwnerName()<<endl<<person1.getBalance()<<endl;
	
	return 0;
}
