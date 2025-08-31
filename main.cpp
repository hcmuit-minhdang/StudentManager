#include "StudentManager.h"
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	

	StudentManager Student;
	int choice;

	do {
		cout << "---Menu---" << endl;
		cout << "1. Add student" << endl;
		cout << "2. Show all students" << endl;
		cout << "3. Find student by ID" << endl;
		cout << "4. Remove student by ID" << endl;
		cout << "5. Sort by GPA" << endl;
		cout << "0. Exit" << endl;
		
		cin >> choice;

		switch (choice)
		{
		case 1:
			Student.AddStudent();
			break;
		case 2:
			Student.ShowAll();
			break;
		case 3: {
			string id;
			cout << "Endter ID to find: ";
			cin >> id;
			Student.FindbyID(id);
			break;
		}
		case 4: {
			string id;
			cout << "Enter ID to remove: ";
			cin >> id;
			Student.RemovebyID(id);
			break;
		}
		case 5:
			Student.SortByGPA();
			break;
		case 0:
			cout << "Exited!!!";
			break;
		default:
			cout << "Invalid Choice!";
		}
	} while (choice != 0);
	return 0;
}