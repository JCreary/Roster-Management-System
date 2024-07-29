/*
F.  Demonstrate the program’s required functionality by adding a main() function in main.cpp, which will contain the required function calls to achieve the following results:
1.  Print out to the screen, via your application, the course title, the programming language used, your WGU student ID, and your name.
2.  Create an instance of the Roster class called classRoster.
3.  Add each student to classRoster.
4.  Convert the following pseudo code to complete the rest of the  main() function:
classRoster.printAll();
classRoster.printInvalidEmails();

//loop through classRosterArray and for each element:
classRoster.printAverageDaysInCourse(/current_object's student id);

Note: For the current_object's student id, use an accessor (i.e., getter) for the classRosterArray to access the student id.

classRoster.printByDegreeProgram(SOFTWARE);
classRoster.remove("A3");
classRoster.printAll();
classRoster.remove("A3");
//expected: the above line should print a message saying such a student with this ID was not found.
5.  Implement the destructor to release the memory that was allocated dynamically in Roster.
 */

#include "roster.hpp" //includes roster header
//Main class
int main() {

  // Prints course information such as Course, Programming language, Student ID, and Name
    cout << "Course: Scripting and Programming - Foundations - C173 " << std::endl;
    cout << "Programming Language: C++" << std::endl;
    cout << "Student ID: 000993077" << std::endl;
    cout << "Name: Jamal Creary" << std::endl;
    cout << std::endl;

  // String of data such as StudentID, First Name, Last Name, Email, Age, Days in Course and Degree Program
  const string studentData[] = {

      "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
      "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
      "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
      "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
      "A5,Jamal,Creary,jcreary@wgu.edu,32,35,40,45,SOFTWARE"};

  // Variable of number of students
  const int numberofStudents = 5;

  // Creates the classRoster instance
  Roster classRoster;

  // for loop which examines and extracts data for each string and stores it in the classRoster object
  for (int i = 0; i < numberofStudents; i++){
    classRoster.parse(studentData[i]);
  }

  // Prints the Student Data Table
  cout << "Student Data Table" << std::endl;
  cout << "------------------" << std::endl;
  classRoster.printAll();
  cout << std::endl;

  // Prints the invalid email's in the Student Data table
  cout << "Students with invalid email: " << std::endl;
  classRoster.printInvalidEmails();
  cout << std::endl;

  // Prints average amount of days spent in the course
    cout << "Average amount of days in course: " << std::endl;
    for (int i = 0; i < numberofStudents; i++) {
        classRoster.printAverageDaysToCompleteCourse(classRoster.classRosterArray[i]->getStudentID());
    }

  // Prints a blank line
    cout << std::endl;

  // Prints out students in the class Roster according to their Degree Program
  cout << "Students in the \"SOFTWARE\" degree program: " << std::endl;
  classRoster.printByDegreeProgram(SOFTWARE);

  // Removes students information based on ID and prints whether the student was deleted or not located
  cout << "Removing student with ID: A3" << std::endl;
  classRoster.remove("A3");
  cout << std::endl;

  // Prints complete Student Data Table
  cout << "Student Data Table" << std::endl;
  cout << "------------------" << std::endl;
  classRoster.printAll();
  cout << std::endl;

  // Removes students information based on studentID and prints whether the student was deleted or not located
  cout << "Removing student with StudentID: A3" << std::endl;
  classRoster.remove("A3");
  cout << std::endl;

  return 0;
}



