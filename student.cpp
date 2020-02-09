#include "student.h"

void Student::Import()
{
	fflush(stdin);
	cout << "\nStudent Name: ";
	getline(cin, Name);
	cout << "\nAddress: ";
	getline(cin, Address);
	cout << "\nBirthday: ";
	Birthday.Import();
	cout << "\nInput Student Code: ";
}
void Student::Export()
{
	cout << "\nStudent Code: " << Code;
	cout << "\nStudent Name: " << Name;
	cout << "\nBirthday: ";
	Birthday.Export();
	cout << "\nAddress: " << Address;
}
int Student::getCode()
{
	return Code;
}
string Student::getName()
{
	return Name;
}
string Student::getAdd()
{
	return Address;
}
void Student::setCode(int codeStu)
{
	Code = codeStu;
}
void Student::setName(string nameStu)
{
	Name = nameStu;
}
void Student::setAddr(string addrStu)
{
	Address = addrStu;
}