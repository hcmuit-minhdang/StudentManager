#pragma once
#include <iostream>
#include <string>
using namespace std;

class Student
{
	private:
		string ID, name;
		int age;
		double GPA;
	public:
		Student() : ID(""), name(""), age(0), GPA(0.0) {}
		Student(string ID, string name, int age, double GPA) : ID(ID), name(name), age(age), GPA(GPA) {}

		string getID() { return ID; }
		string getName() { return name; }
		int getAge() { return age; }
		double getGPA() { return GPA; }

		void setID(string ID) { 
			this->ID = ID; 
		}
		void setName(string name) {
			this->name = name;
		}
		void setAge(int age) {
			this->age = age;
		}
		void setGPA(double GPA) {
			this->GPA = GPA;
		}


		void input()
		{
			cout << "Enter Student's ID: ";
			cin >> ID;
			cin.ignore();
			cout << "Enter Student's Name: ";
			getline(cin, name);
			cout << "Enter Student's Age: ";
			cin >> age;
			cout << "Enter Student's GPA: ";
			cin >> GPA;
		}

		void display()
		{
			cout << "Student's ID: " << ID << endl;
			cout << "Student's name: " << name << endl;
			cout << "Student's age: " << age << endl;
			cout << "Student's GPA: " << GPA << endl;
			cout << endl;
		}
};