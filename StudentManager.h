#pragma once
#include "Student.h"
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

class StudentManager
{
	private:
		vector<Student> Manager;
	public:
		void AddStudent()
		{
			Student s;
			s.input();
			Manager.push_back(s);
			cout << "Add Student Successfully." << endl;
		}

		void ShowAll()
		{
			if (Manager.empty())
			{
				cout << "No Student Available. " << endl;
				return;
			}
			cout << "---StudentList---" << endl;
			for (auto& s : Manager)
				s.display();
		}
		void FindbyID(string ID)
		{
			Student s;
			for (auto& s : Manager)
			{
				if (s.getID() == ID)
				{
					s.display();
					return;
				}
			}
			cout << "Student not found. " << endl;
		}

		void RemovebyID(string ID)
		{
			for (auto i = Manager.begin(); i != Manager.end(); ++i)
			{
				if (i->getID() == ID)
				{
					Manager.erase(i);
					cout << "Remove Successfully!" << endl;
					return;
				}
			}
			cout << "Student not found!" << endl;
		}
		
		static bool CompareGPA(Student s1, Student	s2)
		{
			return s1.getGPA() > s2.getGPA();
		}

		void SortByGPA()
		{
			sort(Manager.begin(), Manager.end(), CompareGPA);
			cout << "Sorted by GPA Successfully! " << endl;
		}
};