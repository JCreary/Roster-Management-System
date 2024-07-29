#include "student.hpp" //include student header
#include "degreeProgram.hpp"  //include degree header

// Constructor that initializes the variables to zero or an empty string and degree program to software
Student::Student() {
  this->studentID = "";
  this->firstName = "";
  this->lastName = "";
  this->emailAddress = "";
  this->age = 0;
  for (int i = 0; i < daysToCompleteCoursesTotal; i++){
    this->daysToCompleteCourse[i] = 0;
  }this->degreeProgram = SOFTWARE;
}

// Constructor that requires the Student ID, First Name, Last Name, Email Address, Age, Days In Courses, and Degree Program
Student::Student(string studentID, string firstName, string lastName,
                 string emailAddress, int age, int daysToCompleteCourse[],
                 DegreeProgram degreeprogram) {
  this->studentID = studentID;
  this->firstName = firstName;
  this->lastName = lastName;
  this->emailAddress = emailAddress;
  this->age = age;
  for (int i = 0; i < daysToCompleteCoursesTotal; i++)
    this->daysToCompleteCourse[i] = daysToCompleteCourse[i];
  this->degreeProgram = degreeprogram;
}
// Destructor
Student::~Student() {}

// Functions of getters for the Student ID, First Name, Last Name, Email Address, Age, Days In Courses, and Degree Program
string Student::getStudentID() {
    return this->studentID;
}

string Student::getFirstName() {
    return this->firstName;
}

string Student::getLastName() {
    return this->lastName;
}

string Student::getEmailAddress() {
    return this->emailAddress;
}

int Student::getage() {
    return this->age;
}

int *Student::getdaysToCompleteCourse() {
    return this->daysToCompleteCourse;
}

DegreeProgram Student::getDegreeProgram() {
    return this->degreeProgram;
}

// Function of setters for the student ID, First Name, Last Name, Email Address, Age, Days In Courses, and Degree Program
void Student::setStudentID(string studentID) {
    this->studentID = studentID;
}

void Student::setFirstName(string firstName) {
    this->firstName = firstName;
}

void Student::setLastName(string lastName) {
    this->lastName = lastName;
}

void Student::setEmailAddress(string emailAddress) {
  this->emailAddress = emailAddress;
}

void Student::setage(int age) {
    this->age = age;
}

void Student::setdaysToCompleteCourses(int daysToCompleteCourse[]) {
  this->daysToCompleteCourse[0] = daysToCompleteCourse[0];
  this->daysToCompleteCourse[1] = daysToCompleteCourse[1];
  this->daysToCompleteCourse[2] = daysToCompleteCourse[2];
}

void Student::setdegreeProgram(DegreeProgram degreeprogram) {
  this->degreeProgram = degreeprogram;
}

// Function to print the header for Student ID, FirstName, LastName, EmailAddress, Age, Days In Courses, and Degree Program
void Student::printHeader() {
    cout << "Student ID  |  First Name  |  Last Name  |  Email Address  |  Age  |  Days To Complete Courses  |  Degree Program" << endl;
}

// Function to print the Student ID, First Name, Last Name, Email Address, Age, Days In Courses, and Degree Program
void Student::print() {
  cout << this->getStudentID() << '\t';
  cout << this->getFirstName() << '\t';
  cout << this->getLastName() << '\t';
  cout << this->getEmailAddress() << '\t';
  cout << "Age: " << this->getage() << '\t';
  cout << "Days To Complete Courses: " << '{' << this->getdaysToCompleteCourse()[0] << ',';
  cout << this->getdaysToCompleteCourse()[1] << ',';
  cout << this->getdaysToCompleteCourse()[2] << '}' << '\t';
  cout << degreeProgramStrings[this->getDegreeProgram()] << '\n';
}
