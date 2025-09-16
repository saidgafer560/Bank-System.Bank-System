#pragma once
#include <iostream>
#include <string>
#include "Person.h"
using namespace std;
class Employee :
    public Person
{
	double salary;

public:
	Employee(int id, string name, string password, double salary)
		:Person(id, name, password) {

		if (salary >= 5000) {
			this->salary = salary;
		}
		else {
			this->salary = 5000;
		}
	}

	void set_Salary(double salary) {
		if (salary >= 5000) {
			this->salary = salary;
		}
		else {
			this->salary = 5000;
		}
	}
	double get_Salary() {
		return salary;
	}

	void display_Function() {
		Person::display_Function();
		cout << "Salary : " << salary << endl;
	}



};

