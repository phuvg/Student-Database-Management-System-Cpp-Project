#pragma once
#include<iostream>
using namespace std;
class Birthday
{
private:
	int Day, Month, Year;
public:
	void Import();
	void Export();
	int getDay();
	int getMonth();
	int getYear();
	void setDay(int dayStu);
	void setMonth(int monthStu);
	void setYear(int yearStu);
};

