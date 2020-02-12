#include "student.h"

void Student::Import()
{
	fflush(stdin);
	cout << "\nInput Student Code: ";
	cin >> Code;
	cout << "\nStudent Name: ";
	cin.ignore();
	getline(cin, Name);
	cout << "\nAddress: ";
	getline(cin, Address);
	Day.Import();

}
void Student::Export()
{
	cout << "\nStudent Code: " << Code;
	cout << "\nStudent Name: " << Name;
	cout << "\nBirthday: ";
	Day.Export();
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
void Student::setBirthday(Birthday dayStu)
{
	Day = dayStu;
}