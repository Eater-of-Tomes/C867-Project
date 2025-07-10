#include <string>
#include "student.h"
#include "degree.h"
#include <iostream>
using namespace std;

Student::Student() {
	
};

void Student::editID(int ID) {
	studentID = ID;
};

void Student::editFName(string fName) {
	firstName = fName;
};

void Student::editLName(string lName) {
	lastName = lName;
};

void Student::editEmail(string Email) {
	emailAddress = Email;
};

void Student::editAge(int studentAge) {
	age = studentAge;
};

void Student::editDaysToComplete(int daysLeft[3]) {
	for (int i = 0; i < 3; i++) {
		daysToComplete[i] = daysLeft[i];
	};
};

void Student::editCurrentDegreeProgram(string Degree) {
	if (Degree == "SECURITY") {
		currentProgram = DegreeProgram::SECURITY;
	} 
	else if (Degree == "NETWORK") {
		currentProgram = DegreeProgram::NETWORK;
	}
	else {
		currentProgram = DegreeProgram::SOFTWARE;
	}
};

void Student::print() const {
    cout << studentID << "\t"
        << "First Name: " << firstName << "\t"
        << "Last Name: " << lastName << "\t"
        << "Email: " << emailAddress << "\t"
        << "Age: " << age << "\t"
        << "daysInCourse: {" << daysToComplete[0] << ", "
        << daysToComplete[1] << ", "
        << daysToComplete[2] << "} "
        << "Degree Program: ";

    switch (currentProgram) {
    case DegreeProgram::SECURITY:
        cout << "Security";
        break;
    case DegreeProgram::NETWORK:
        cout << "Network";
        break;
    case DegreeProgram::SOFTWARE:
        cout << "Software";
        break;
    }
    cout << endl;
};