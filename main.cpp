#include "student.h"
#include <iostream>
using namespace std;

int main()
{
	Student hs;
	hs.Import();
	hs.Export();
	system("pause");
	return 0;
}

void listRecords(Student listStudent[], int numOfList) {
	cout << "--- LIST RECORDS ---" << endl;
	for (int i = 0; i < numOfList; i++) {
		cout << i << "." << endl;
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

void deleteRecords(Student listStudent[], int &numOfList) {
	cout << "--- DELETE RECORDS ---" << endl;
	//list empty -> out
	if (numOfList == 0) {
		cout << "List student is empy!" << endl;
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