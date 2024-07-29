/*
E.  Create a Roster class (roster.cpp) by doing the following:
1.  Create an array of pointers, classRosterArray, to hold the data provided in the “studentData Table.”
2.  Create a student object for each student in the data table and populate classRosterArray.
a.  Parse each set of data identified in the “studentData Table.”
b.  Add each student object to classRosterArray.
3.  Define the following functions:
a.  public void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram)  that sets the instance variables from part D1 and updates the roster.
b.  public void remove(string studentID)  that removes students from the roster by student ID. If the student ID does not exist, the function prints an error message indicating that the student was not found.
c. public void printAll() that prints a complete tab-separated list of student data in the provided format: A1 [tab] First Name: John [tab] Last Name: Smith [tab] Age: 20 [tab]daysInCourse: {35, 40, 55} Degree Program: Security. The printAll() function should loop through all the students in classRosterArray and call the print() function for each student.
d.  public void printAverageDaysInCourse(string studentID)  that correctly prints a student’s average number of days in the three courses. The student is identified by the studentID parameter.
e.  public void printInvalidEmails() that verifies student email addresses and displays all invalid email addresses to the user.

Note: A valid email should include an at sign ('@') and period ('.') and should not include a space (' ').

f.  public void printByDegreeProgram(DegreeProgram degreeProgram) that prints out student information for a degree program specified by an enumerated type.
*/

#ifndef ROSTER_H_
#define ROSTER_H_

//include student header
#include "student.hpp"

//Creating class for roster
class Roster {
    
    //Private variable
private:
    int numberOfStudents = 5;
    
    //Public class
public:
    
    //Destructor
    ~Roster();
    
    //Variable assigned to -1
    int vecContainer = -1;
    
    
    //Created an array with class size of 5
    Student * classRosterArray[5];
    
    
    //Parse function goes through strings and extract data
    void parse(string row);
    
    //created a new student object and added it to the classRosterArray
    void add(string studentID,
             string firstName,
             string LastName,
             string emailAddress,
             int age,
             int daysToCompleteCourse1,
             int daysToCompleteCourse2,
             int daysToCompleteCourse3,
             DegreeProgram degreeProgram);
    void remove(string studentID);
    void printAll(); // calls the print() method for students in student class
    void printAverageDaysToCompleteCourse(string studentID); // Function outputs the Average Days to complete the Course using the Student's ID
    void printInvalidEmails(); // Prints students with invalid email addresses. A valid email should include an at sign ('@') and period ('.') and should not include a space (' ').
    void printByDegreeProgram(DegreeProgram degreeprogram); //Degree Program passed in
    

};
#endif
