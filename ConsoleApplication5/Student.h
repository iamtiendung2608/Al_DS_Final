
#ifndef Student_H
#include<string>
#include<iomanip>
using namespace std;
class Student {
public:
	 string ID;
	 string Name;
	 int Age;
	 string Gender;
	Student(string m_ID, string m_Name, int m_Age,string m_Gender)
		:ID{ m_ID }, Name{ m_Name }, Age{ m_Age }, Gender{ m_Gender }{}

};
std::ostream& operator<<(std::ostream& out, const Student& student) {
	out << setw(12) << left << student.ID << setw(12) << left << student.Name
		<< setw(12) << left << student.Age << setw(12) << left << student.Gender << endl;
	return out;
}
static bool Check(Student student) {

	if (student.Age < 0 || student.Age>25)
		return false;
	return true;
}
#endif // !1







