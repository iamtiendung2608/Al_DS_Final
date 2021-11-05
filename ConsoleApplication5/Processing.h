#pragma
#include<string>
#include<iostream>
#include<sstream>
#include"BuildProgram.h"
using namespace std;
//Main Program
void StartSQL(){
	string command;
	StudentInfo k;
	// Build Command
	while (true) {
		cout << '\n';
		cout << "StudentInfo=# ";
		//String to lower case to chain command
		//a class of command to process Database

		getline(std::cin, command);
		if (command._Equal("Exit Database"))
		{
			Save_Database();
			break;
		}
		else 
		{
			if (command._Equal("SELECT")) {
				Select_Database();
			}
			else if (command._Equal("DELETE")) {
				Delete_Database();
			}
			else if (command._Equal("UPDATE")) {
				Update_Database();
			}
			else if (command._Equal("INSERT")) {
				Insert_Database(k);
			}
			else {
				cout << "Invalid Command" << endl;
			}
		}
	}
	Read_Database();
}


