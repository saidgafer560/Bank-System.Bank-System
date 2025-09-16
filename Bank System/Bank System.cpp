#include <iostream>
#include <string>
#include "Person.h"
#include "Client.h"
#include "Employee.h"
#include "Admin.h"
using namespace std;

int main() {

	/*Person s(1, "ahmed", "said12345");
	s.display_Function();*/

	Client s(1, "ahmed", "said12345", 20000) ,
		   s1(2, "ahmed", "said12345", 5000);

	s.transfer_to(7000 ,s1);
	s.checkBalance();
	s1.checkBalance();

	cout << "SAID ";
	cout << "Ahmed ";
	cout << "Ahmed ";
	cout << "Ahmed ";cout << "Ahmed ";





	return 0;
}
