#ifndef ManiDatabase_H     // equivalently, #if !defined HEADER_H_
#define ManiDatabase_H 
#include<map>
#include<fstream>
#include"Student.h"
using namespace std;
class Data
{
	map<string,StudentInfo>Table;
	//Select O(logN)
	//Insert O(1)
	// O(2n)
	//Tree Insert(logN)
	//Tree Select(logN)
	//Delete 
public:
	//Insert
	void Insert(StudentInfo student) {
		Table.insert(pair<string, StudentInfo>(student.ID, student));
	}
	//Delete
	void Delete(string ID) {
		Table.erase(ID);
	}
	//Update
	void Update(string ID, StudentInfo student) {
		map<string, StudentInfo>::iterator it;
		it = Table.find(ID);
		Table.erase(ID);
		if (student.Gender._Equal(""))
			student.Gender = it->second.Gender;
		if (student.Age == 0)
			student.Age = it->second.Age;
		if (student.Name._Equal(""))
			student.Name = it->second.Name;
		Table.insert(pair<string, StudentInfo>(ID, student));
	}
	//Select
	map<string, StudentInfo>getAll() {
		return Table;
	}
	//Save To Database
	void Save() {
		fstream file;
		file.open("data.txt",ios::out);
		for (auto const& pair : Table) {
			file << pair.second;
		}
		file.close();
	}
	//Read Database
	void Read() {
		fstream file;
		// -- between fields
		file.open("data.txt", ios::in);
		string k;
		while (getline(file, k)) {

			cout << k<< endl;
			//String split C++ chain to object
		}
		file.close();
	}
};
#endif





