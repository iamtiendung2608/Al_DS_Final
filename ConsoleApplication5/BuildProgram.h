
#include"Student.h"
#include<iostream>
#include"MainDatabase.h"
using namespace std;
Data k;
void Insert_Database(StudentInfo newStudent) {
	std::cin >> newStudent;
	cin.ignore();
	if (Check(newStudent)) {
		k.Insert(newStudent);
		cout << "Insert into StudentInfo (ID, Name, Age, Gender)" << endl;
		cout << '\n';

	}
	else {
		cout << "Some of the attribute mustn't be null" << endl;
	}
}
void Delete_Database() {
	cout << "Chose ID:";
	string ID;
	getline(cin, ID);
	k.Delete(ID);
}
void Update_Database() {

}
void Select_Database() {
	map<string, StudentInfo>all = k.getAll();
	cout << setw(22) << left << "ID" << setw(22) << left << "Name"
		<< setw(22) << left << "Age" << setw(22) << left << "Gender" << endl;
	cout << setw(22) << left<< "----------------------------------------------------------------------------" << endl;
	for (auto const& pair : all) {
		std::cout << pair.second;
	}
	cout << '\n';
}


