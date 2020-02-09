#pragma once
#include "Ngay.h"
#include<string>
class Student
{
private:
	string Name , Address;
	int Code;
	Birthday Birthday;
public:
	void Import();
	void Export();
	string getName();
	string getAdd();
	int getCode();
	void setName(string nameStu);
	void setAddr(string addrStu);
	void setCode(int codeStu);
};

