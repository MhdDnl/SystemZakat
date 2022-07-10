#include <string.h>
#include <iostream>

using namespace std;

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