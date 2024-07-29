# Roster-Management-System

This project is a Roster Management System developed using C++. It allows users to manage student data, including adding, removing, and printing student information. The system also includes functionalities for validating email addresses, calculating the average days spent in courses, and filtering students by degree programs.

Features

Print course information and student details
Add and remove students from the roster
Print all students
Print invalid email addresses
Calculate and print the average days spent in courses
Print students by degree program
Handle memory management with a destructor
Getting Started

Prerequisites
C++ Compiler (e.g., GCC, Clang, MSVC)
Standard Library
Installation
Clone the repository to your local machine:
bash
Copy code
git clone https://github.com/your-username/roster-management-system.git
Navigate to the project directory:
bash
Copy code
cd roster-management-system
Usage

Compile the program:
bash
Copy code
g++ -o roster main.cpp roster.cpp student.cpp degree.cpp
Run the executable:
bash
Copy code
./roster
Code Overview

main.cpp
This file contains the main function, which demonstrates the required functionality of the program.

main() Function

Prints course information, including the course title, programming language, student ID, and name.
Creates an instance of the Roster class called classRoster.
Adds each student to classRoster.
Prints all student data.
Prints invalid email addresses.
Prints the average days spent in courses for each student.
Prints students in the "SOFTWARE" degree program.
Removes a student with the ID "A3" and prints the updated roster.
Attempts to remove the student with ID "A3" again to demonstrate error handling.
roster.hpp
This file contains the declarations for the Roster class and its member functions.

roster.cpp
This file contains the definitions for the Roster class member functions, including adding students, printing student data, validating email addresses, and removing students.

student.hpp
This file contains the declarations for the Student class and its member functions.

student.cpp
This file contains the definitions for the Student class member functions.

degree.hpp
This file contains the enumerations for the degree programs.
