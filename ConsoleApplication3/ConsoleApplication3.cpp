#include<iostream>
#include <stdlib.h>
#include <Windows.h>
#include <string>
#include "app.h"

using namespace std;
#include <string.h>



bool login() {
	string username;
	int password;
	int count = 0;
	while (count < 3) {
		cout << "Please enter your username:"; cin >> username;
		cout << "Please enter your password:"; cin >> password;
		if (password == 123 && username == "up") {
			return true;
		}
		else {
			count++;
			cout << "Wrong username or password\n";
		}

	}
	return false;

}


int main()
{


	bool registered = login();

	if (registered) {
		//Start application
		run_app();
	}
	else {
		cout << "===============================================" << endl;
		cout << "          Thanks For Using Our System          " << endl;
		cout << "===============================================" << endl;
		cout << "You been kicked out from system due to false " << endl;
		cout << "id number and password,Please try again" << endl;
		cout << "                                               " << endl;
		cout << "                                               " << endl;
		cout << "Note:You have 3 login attempt                  " << endl;
		cout << "===============================================" << endl;
		// exit
	}
	
}








