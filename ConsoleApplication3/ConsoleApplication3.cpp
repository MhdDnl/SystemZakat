#include<iostream>
#include "app.h"
#include "Login.h"

using namespace std;

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
		cout << "username and password,Please try again" << endl;
		cout << "                                               " << endl;
		cout << "                                               " << endl;
		cout << "Note:You have 3 login attempt                  " << endl;
		cout << "===============================================" << endl;
	}
	
}








