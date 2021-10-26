#ifndef ManiDatabase_H     // equivalently, #if !defined HEADER_H_
#define ManiDatabase_H 
#include<map>
#include"Student.h"
using namespace std;
class Data
{
	map<string,StudentInfo>Table;
public:
	void Insert(StudentInfo student) {
		Table.insert(pair<string, StudentInfo>(student.ID, student));
	}
	void Delete(string ID) {
		Table.erase(ID);
	}
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
	map<string, StudentInfo>getAll() {
		return Table;
	}
};
#endif





