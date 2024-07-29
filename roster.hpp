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
