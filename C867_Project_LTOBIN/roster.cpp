#include "roster.h";
#include <string>;
#include <iostream>;
#include "student.h"
using namespace std;

Roster::Roster() {};

string Deleted = "Deleted";

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age,
    int daysToComplete1, int daysToComplete2, int daysToComplete3, DegreeProgram degreeProgram) {
    int days[3] = { daysToComplete1, daysToComplete2, daysToComplete3 };

    string** classRosterArray = new string * [numStudents];
    for (int i = 0; i < numStudents; ++i) {
        classRosterArray[i] = new string[numFields];
    };
}

void Roster::remove(string studentID) {
         for (int i = 0; i < numStudents; ++i) {
			if (classRosterArray[i][0] == inputID) {
				for (int j = 0; j < numFields; ++j) {
					classRosterArray[i][j] = Deleted;
				}
			}
			else {
				cout << "That student doesn't exist!" << endl;
			};
		};
    };

void Roster::printAll() {
	for (int k = 0; k < numStudents; ++k) {
		classRosterArray[k]->print();
	}
}