
#ifndef Student_H     // equivalently, #if !defined HEADER_H_
#define Student_H
#include<iomanip>
using namespace std;
class StudentInfo {
public:   
	 //primary key
	 string ID="";
	 string Name="";
	 int Age=0;
	 //Male or Female
	 string Gender="";
	StudentInfo(string m_ID, string m_Name, int m_Age,string m_Gender)
		:ID{ m_ID }, Name{ m_Name }, Age{ m_Age }, Gender{ m_Gender }{}
	StudentInfo() {

	}
};
//stdout
std::ostream& operator<<(std::ostream& out, const StudentInfo& studentInfo) {
	out << setw(22) << left << studentInfo.ID << setw(22) << left << studentInfo.Name
		<< setw(22) << left << studentInfo.Age << setw(22) << left << studentInfo.Gender << endl;
	return out;
}
//stdin
std::istream& operator>>(std::istream& in, StudentInfo& sudentInfo) {
	cout << setw(15)<<right <<  "Type ID: ";
	in >> sudentInfo.ID;
	cout << setw(15) << right <<  "Type Name: ";
	in >> sudentInfo.Name;
	cout << setw(15) << right <<  "Type Age: ";
	in >> sudentInfo.Age;
	cin.ignore();
	cout << setw(15) << right << "Type Gender: ";
	in >> sudentInfo.Gender;
	return in;
}

//Checking valid StudentInfoInfoInfo
bool Check(StudentInfo StudentInfoInfoInfo) {
	if (StudentInfoInfoInfo.Age < 0 || StudentInfoInfoInfo.Age>25)
		return false;
	if (!StudentInfoInfoInfo.Gender._Equal("Male") && !StudentInfoInfoInfo.Gender._Equal("Female"))
		return false;
	if (StudentInfoInfoInfo.ID._Equal("") || StudentInfoInfoInfo.Name._Equal("") || StudentInfoInfoInfo.Gender._Equal(""))
		return false;
	return true;
}
#endif







