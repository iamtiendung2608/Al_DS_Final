#pragma
#include<string>
#include<iostream>
#include<sstream>
#include"BuildProgram.h"
using namespace std;
void StartSQL(){
	string command;
	StudentInfo k;
	while (true) {
		cout << '\n';
		cout << "StudentInfo=# ";
		getline(std::cin, command);
		if (command._Equal("Exit Database"))
			break;
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
}


