#include "Ngay.h"
void Birthday::Import()
{
	cout << "\nDay: ";
	cin >> Day;
	cout << "Month: ";
	cin >> Month;
	cout << "Year: ";
	cin >> Year;
}
void Birthday::Export()
{
	cout << "\n" << Day << "/" << Month << "/" << Year;
}
int Birthday::getDay()
{
	return Day;
}
int Birthday::getMonth()
{
	return Month;
}
int Birthday::getYear()
{
	return Year;
}
void Birthday::setDay(int dayStu)
{
	Day = dayStu;
}
void Birthday::setMonth(int monthStu)
{
	Month = monthStu;
}
void Birthday::setYear(int yearStu)
{
	Year = yearStu;
}
