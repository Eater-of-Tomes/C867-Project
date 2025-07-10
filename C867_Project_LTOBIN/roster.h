#include "student.h"
#include<string>
#include<vector>

class Roster {
public:
	Roster();
	~Roster();
	void add(string studentID, string firstName, string lastName, string emailAddress, int age,
		int daysToComplete1, int daysToComplete2, int daysToComplate3, DegreeProgram degreeProgram);
	void remove(string studentID);
	void printAll();
	void printAverageDaysInCourse(string studentID);
	void printInvalidEmails();
	void printByDegreeProgram(DegreeProgram degreeProgram);
private:
	Student* classRosterArray[5];
	int index{ 0 };
	int numStudents{ 5 };
	int numFields{ 9 };
};


