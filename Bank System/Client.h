#pragma once
#include <iostream>
#include <string>
#include "Person.h"
using namespace std;
class Client :
    public Person
{

		double balance;

	public:

		Client (int id ,string name ,string password , double balance)
			:Person (id ,name ,password) { 
		
			if (balance >= 1500) {
				this->balance = balance;
			}
			else {
				this->balance = 1500;
			}

		}

		void set_Balance(double balance) {
			if (balance >= 1500) {
				this->balance = balance;
			}
			else {
				this -> balance = 1500;
			}
		}
		double get_Balance() {
			return balance;
		}

		void deposit(double amount) {
			balance += amount;
		}

		void withdraw(double amount) {
			if (amount <= balance) {
				balance -= amount;
			} 
			else {
				cout << "Amount Exceeded Balance" << endl;
			}
		}

		void transfer_to(double amount, Client& recipient) {
			if (amount <= balance) {
				balance -= amount;
				recipient.deposit(amount);

			}
			else {
				cout << "Amount Exceeded Balance" << endl;
			}
		}

		void checkBalance() {
			cout << "Balance : " << balance<< endl;
		}

		void display_Function() {
			Person::display_Function();
			cout << "Balance : " << balance << endl;
		}
			

	

};








