#ifndef Processing_H
#include<string>
#include<iostream>
#include<sstream>
using namespace std;
void StartSQL(){
	string command;

	while (true) {
		cout << "Student=# ";
		getline(std::cin, command);
		stringstream ss(command);
		if (command._Equal("Exit Database"))
			break;
		else 
		{
			string startCommand;
			ss >> startCommand;
			if (startCommand._Equal("SELECT")) {
				break;
			}
			else if (startCommand._Equal("DELETE")) {

			}
			else if (startCommand._Equal("UPDATE")) {

			}
			else {
				cout << "Invalide Command" << endl;
			}
		}
	}
}





#endif // !Processing_H
