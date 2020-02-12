#include "student.h"
#include <iostream>
#include <stdlib.h>
#include <windows.h>
using namespace std;

void importNumOfStu(Student listStudent[], int& numOfList)
{

	int flag_check = 1;
	cout << "flag_check = " << flag_check << endl;
	while (flag_check == 1) {
		cout << "---Add Information Of Student ";
		cout << numOfList + 1 << endl;
		listStudent[numOfList].Import();
		numOfList++;

		// input to continue or not
		char yesNo;
		cout << "Add another Records? (Y/N) ";
		cin >> yesNo;
		cout << "flag_check = " << flag_check << endl;
		if (yesNo == 'Y' || yesNo == 'y')
		{
			flag_check = 1;
			cout << "if yes" << endl;
		}
		cout << "flag_check = " << flag_check << endl;
		if (yesNo == 'N' || yesNo == 'n')
		{
			flag_check = 0;
			cout << "if no" << endl;
		}
		cout << "flag_check_new = " << flag_check << endl;
	}
}

void listRecords(Student listStudent[], int numOfList) {
	cout << "--- LIST RECORDS ---" << endl;
	for (int i = 0; i < numOfList; i++) {
		cout <<"\n"<< i +1 << "." << endl;
		listStudent[i].Export();
	}
}

int findCode(Student listStudent[], int numOfList, int codeDel) {
	for (int i = 0; i < numOfList; i++) {
		if (listStudent[i].getCode() == codeDel) {
			return i;
		}
	}
	return -1; // not found
}

void modifyRecord(Student listStudent[], int& numOfList)
{
	cout << "--- MODIFY INFORMATION STUDENT ---" << endl;
	//list empty -> out
	if (numOfList == 0)
	{
		cout << "List student is empty!" << endl;
		return;
	}
	//define student to fix
	int codeFix;
	cout << "INPUT STUDENT WANT TO FIX: ";
	cin >> codeFix;
	int pos = findCode(listStudent, numOfList, codeFix);
	//fix
	if (pos == -1) //not found
	{
		cout << "Not found this student!" << endl;
	}
	else {
		cout << "Modify Information Student ";
		int informationEdit;
		cout << "_________________________" << endl;
		cout << "|U-♫1. Edit name" << endl;
		cout << "|2. Edit code" << endl;
		cout << "|3. Edit address" << endl;
		cout << "|4. Birdth day" << endl;
		cout << "__________________________" << endl;
		cin >> informationEdit;
		
		//edit
		if (informationEdit == 1)
		{
			string temp;
			cin.ignore();
			getline(cin, temp);
			listStudent[pos].setName(temp);
		}
		if (informationEdit == 2)
		{
			int temp;
			cin >> temp;
			listStudent[pos].setCode(temp);
		}
		if (informationEdit == 3)
		{
			string temp;
			cin.ignore();
			getline(cin, temp);
			listStudent[pos].setAddr(temp);
		}
		if (informationEdit == 4)
		{
			Birthday temp;
			temp.Import();
			listStudent[pos].setBirthday(temp);
		}
	}
}

void deleteRecords(Student listStudent[], int & numOfList) {
	cout << "--- DELETE RECORDS ---" << endl;
	//list empty -> out
	if (numOfList == 0) {
		cout << "List student is empty!" << endl;
		return;
	}
	//define student to delete
	int codeDel;
	cout << "Please input the code of Student need to delete: ";
	cin >> codeDel;
	int pos = findCode(listStudent, numOfList, codeDel);
	//delete
	if (pos == -1) { //not found
		cout << "Not found this student!" << endl;
	}
	else {
		//delete tail
		if (pos == numOfList) {
			numOfList = numOfList - 1;
		}
		else {
			for (int i = pos; i < numOfList; i++) {
				listStudent[i] = listStudent[i + 1];
			}
			numOfList = numOfList - 1;
		}
	}
	cout << "Delete complete!" << endl;
}
int main()
{
	Student listStudent[1000];
	int numOfList=0; //save num of list student
	while (true)
	{
		HANDLE hConsoleColor;
		hConsoleColor = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsoleColor, 12);
		int choose;
		cout << "Student Database Management System" << endl;
		cout << "1. Add     Records" << "\n2. List    Records" << "\n3. Modify  Records" << "\n4. Delete  Records" << "\n5. Exit    Records" << endl;
		cout << "Select Your Choice! => ";
		cin >> choose;
		system("cls");
		switch (choose)
		{
		case 1: importNumOfStu(listStudent, numOfList); system("cls");;
			break;
		case 2: listRecords(listStudent, numOfList);
			break;
		case 3: modifyRecord(listStudent, numOfList);
			break;
		case 4: deleteRecords(listStudent, numOfList);
			break;
		case 5: exit(0);
			break;
		default: cout << "\nPlease choose again!";
			break;
		}
		
	}
	system("pause");
	return 0;
}