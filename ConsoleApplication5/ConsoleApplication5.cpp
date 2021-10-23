// ConsoleApplication5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<iomanip>
#include<string.h>
#include <string>
#include"Student.h"
#include"Processing.h"
using namespace std;
int main()
{
	StartSQL();
	cout << setw(12) << left << "ID" << setw(12) << left << "Name"
		<< setw(12) << left << "Age" << setw(12) << left << "Gender"<<endl;
	cout << setw(12) << left << "----------------------------------------" << endl;
	Student k("20110622", "Dung", 18, "Male");
	Student k2("20110258", "Binh", 18, "Male");
	Student k3("20110654", "Tien", 18, "Male");
	cout << k<<k2<<k3;
	return 0;
}

