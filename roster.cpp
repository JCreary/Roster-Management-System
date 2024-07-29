#include "roster.hpp"

void Roster::parse(string studentdata) {  //Parses each row one at a time

  long right = studentdata.find(","); // Finds student ID
  string studentID = studentdata.substr(0,right);
    
  long left = right + 1; // Finds first name
  right = studentdata.find(",", left);
  string first_name = studentdata.substr(left, right - left);

  // Finds last name
  left = right + 1;
  right = studentdata.find(",", left);
  string last_name = studentdata.substr(left, right - left);

  // Finds emailaddress
  left = right + 1;
  right = studentdata.find(",", left);
  string email_address = studentdata.substr(left, right - left);

  // Finds students age
  left = right + 1;
  right = studentdata.find(",", left);
  int age = stoi(studentdata.substr(left, right - left));

  // Obtains average days in 1st course
  left = right + 1;
  right = studentdata.find(",", left);
  int course1 = stoi(studentdata.substr(left, right - left));

  // Obtains average days in 2nd course
  left = right + 1;
  right = studentdata.find(",", left);
  int course2 = stoi(studentdata.substr(left, right - left));

  // Obtains average days in 3rd course
  left = right + 1;
  right = studentdata.find(",", left);
  int course3 = stoi(studentdata.substr(left, right - left));

  // Degree
  left = right + 1;
  right = studentdata.find(",", left);
  string degree = studentdata.substr(left, right - left);

  // Degree program begins initially assigned to SECURITY
DegreeProgram degreeprogram = SECURITY;
  // Check to see if degree program is Software or Network
  if (degree == "SOFTWARE") {
    degreeprogram = SOFTWARE;
  } else if (degree == "NETWORK") {
    degreeprogram = NETWORK;
  }
  // Add student data
    add(studentID, first_name, last_name, email_address, age, course1, course2, course3, degreeprogram);
}

// Added studentid, first name, last name, email address, age, days in course, and the degree program into new instance
void Roster::add(string studentID, string firstName, string LastName, string emailAddress, int age, int daysToCompleteCourse1, int daysToCompleteCourse2, int daysToCompleteCourse3, DegreeProgram degreeprogram) {

  int daysToCompleteCourses[3] = {daysToCompleteCourse1, daysToCompleteCourse2, daysToCompleteCourse3};

  classRosterArray[++vecContainer] = new Student(studentID, firstName, LastName, emailAddress, age, daysToCompleteCourses, degreeprogram);
}
// Function created to remove students from the roster if the student ID does not exist. The function prints an error message stating that the student was not found if the student doesn't exist.
void Roster::remove(string studentID) {
  bool any = false;
  for (int i = 0; i < numberOfStudents; i++) {
    if (classRosterArray[i]->getStudentID() == studentID) {
      any = true;
      delete classRosterArray[i];
      classRosterArray[i] = nullptr;
      for (int j = i; j < (numberOfStudents - 1); j++) {
        classRosterArray[j] = classRosterArray[j + 1];
      }
      Roster::numberOfStudents--;
      break;
    }
  }
  if (any) {
    cout << studentID << " was removed from roster." << std::endl;
  } else
    cout << studentID << " was not found." << std::endl;
}
void Roster::printAll() {
  Student::printHeader();
  for (int i = 0; i < numberOfStudents; i++) {
      if (classRosterArray[i] != nullptr){
            classRosterArray[i]->Student::print();
    }
  }
}

// Prints a student’s average number of days it took them to complete course.
void Roster::printAverageDaysToCompleteCourse(string studentID) {
  for (int i = 0; i < numberOfStudents; i++) {
    if (classRosterArray[i]->getStudentID() == studentID) {

      cout << classRosterArray[i]->getStudentID() << ": ";
      cout << (classRosterArray[i]->getdaysToCompleteCourse()[0]
        +classRosterArray[i]->getdaysToCompleteCourse()[1]
        +classRosterArray[i]->getdaysToCompleteCourse()[2])/3.0 << std::endl;
    }
  }
  cout << std::endl;
}

//Verifies the student's email addresses and prints all invalid email addresses
void Roster::printInvalidEmails() {
  for (int i = 0; i < numberOfStudents; i++) {
    string invalidEmails = classRosterArray[i]->getEmailAddress();

    if (invalidEmails.empty() || invalidEmails.find(' ') != string::npos || invalidEmails.find('@') == string::npos || invalidEmails.find('.') == string::npos) {

      cout << invalidEmails << std::endl;
    }
  }
}

//Prints out student's information by degree program
void Roster::printByDegreeProgram(DegreeProgram degreeprogram) {
  Student::printHeader();
  for (int i = 0; i < numberOfStudents; i++) {
    if (classRosterArray[i]->getDegreeProgram() == degreeprogram){
      classRosterArray[i]->print();
    }
  }
  cout << std::endl;
}

// Destructor to release the memory that was allocated in Roster.
Roster::~Roster() {
  cout << "Destructor" << std::endl;
  for (int i = 0; i < numberOfStudents; i++) {
      cout << "Removed student #:" << i+1 << std::endl;
    delete classRosterArray[i];
    classRosterArray[i] = nullptr;
  }
}
