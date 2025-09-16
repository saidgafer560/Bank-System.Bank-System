#pragma once
#include <iostream>
#include <string>
using namespace std;
class Person
{
	int id;
	string name;
	string password;

public :
	Person(int id, string name, string password) {

		this->id = id;

		if (isalpha && (name.size() >= 5 && name.size() <= 20)) {
			this->name = name;
		}
		else {
			cout << "The name does not match the conditions." << endl;
		}

		if (password.size() >= 8 && password.size() <= 20) {

			this->password = password;
		}
		else {
			cout << "The password does not match the conditions." << endl;
		}
	}

	void set_Name(string name) {
		if (isalpha && (name.size() >= 5 && name.size() <= 20)) {
			this->name = name;
		}
		else {
			cout << "The name does not match the conditions." << endl;
		}
	}
	string get_Name() {
		return name;
	}

	void set_Password(string password) {
		if (password.size() >= 8 && password.size() <= 20) {

			this->password = password;
		}
		else{
			cout << "The password does not match the conditions." << endl;
		}
	}
	string get_Password() {
		return password;
	}

	 void display_Function() {
		cout << "Id : " << id << endl;
		cout << "Name : " << name << endl;
		cout << "Password : " << password << endl;
	}





};

