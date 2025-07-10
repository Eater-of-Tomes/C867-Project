#include <string>
#include "degree.h"
using namespace std;

	class Student {
	public: 
		string getID();
		void editID(int ID);
		string getFName();
		void editFName(string fName);
		string getLName();
		void editLName(string lName);
		string getEmail();
		void editEmail(string Email);
		int getAge();
		void editAge(int studentAge);
		string getDaysToComplete();
		void editDaysToComplete(int daysLeft[3]);
		string getCurrentDegreeProgram();
		void editCurrentDegreeProgram(string Degree);
		void print() const;

	private:
		string studentID;
		string firstName;
		string lastName;
		string emailAddress;
		int age;
		int daysToComplete[3];
		DegreeProgram currentProgram;
	};