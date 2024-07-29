/* D. For the Student class, do the following:
   1. Create the class Student  in the files student.h and student.cpp, which includes each of the following variables:
     •  student ID
     •  first name
     •  last name
     •  email address
     •  age
     •  array of number of days to complete each course
     •  degree program
   2.  Create each of the following functions in the Student class:
     a.  an accessor (i.e., getter) for each instance variable from part D1
     b.  a mutator (i.e., setter) for each instance variable from part D1
     c.  All external access and changes to any instance variables of the Student class must be done using accessor and mutator functions.
     d.  constructor using all of the input parameters provided in the table
     e.  print() to print specific student data
 */

#ifndef STUDENT_H_ //prevents multiple includes
#define STUDENT_H_ //prevents multiple includes
#include <iostream> //standard library
#include <iomanip> //standard library
#include "degreeProgram.hpp" //includes local file degreeProgram header which was created within project
#include <string>
using namespace std;
using std::cout; //used cout from the standard namespace


//Student class established
class Student
{
//public class
public:
//Defined constant of array of the amount of days to complete each course
    const static int daysToCompleteCoursesTotal = 3;

//Private class with private variables created for student ID, first name, last name, email address, age, array of number of days to complete each course, and degree program
private:
    string studentID;
    string firstName;
    string lastName;
    string emailAddress;
    int age;
    int daysToCompleteCourse[daysToCompleteCoursesTotal];
DegreeProgram degreeProgram;

//public class
public:
    //parameterless constructor
    Student();
    //Full constructor which includes variables created in private class
    Student(string studentID, string firstName, string lastName, string emailAddress, int age, int daysToCompleteCourse[], DegreeProgram degreeProgram);
    //Destructor
    ~Student();

    //accessors(getters) for each instance variable from part D1
    string getStudentID();
    string getFirstName();
    string getLastName();
    string getEmailAddress();
    int getage();
    int *getdaysToCompleteCourse();
    DegreeProgram getDegreeProgram();

    //mutators(setters) for each instance variable from part D1
    void setStudentID(string studentID);
    void setFirstName(string firstName);
    void setLastName(string lastName);
    void setEmailAddress(string emailAddress);
    void setage(int age);
    void setdaysToCompleteCourses(int daysToCompleteCourse[]);
    void setdegreeProgram(DegreeProgram degreeProgram);


    //Displays a header for the data
    static void printHeader();
    //Displays student's data
    void print();

};


#endif /* STUDENT_H_ */
