###Hostel Management System
This C++ program is a basic Hostel Management System that manages student records in a hostel. It provides features to add, remove, and display students along with their assigned hostel beds. The program ensures a maximum capacity of 50 beds, allocating them to students on a first-come, first-served basis. It is designed to demonstrate object-oriented programming concepts and basic data handling using C++.

Features
Add Student:

Adds a new student to the hostel with a name and roll number.
Allocates a bed if available and displays a success message.
Displays a "Hostel is full" message if the capacity of 50 beds is reached.
Remove Student:

Removes a student based on their roll number.
Decrements the bed count, making the bed available for future allocations.
Displays an error message if the student is not found.
Display Students:

Lists all students currently residing in the hostel.
Shows each student's name and roll number, or a message if no students are present.
Input Validation:

Ensures valid input for roll numbers (positive integers) and choices.
Handles invalid inputs gracefully, prompting the user to enter valid data.
Code Structure
The program is implemented using a Hostel class, with the following key components:

Class Members:

Attributes: name, rollNo, bed (static), ve (static vector to store students).
Static Members: bed (to track available beds) and ve (a vector holding the student list).
Constants: maxBeds to specify the maximum bed capacity.
Class Methods:

bedStatus(): Checks if a bed is available.
add(): Adds a new student and calls the allocation() method to assign a bed.
allocation(): Allocates a bed if available, displays success or full messages.
remove(): Finds and removes a student by roll number.
display(): Lists all students with their names and roll numbers.
Main Function:

Provides a menu-driven interface for interacting with the system.
Allows the user to add, remove, and display students or exit the program.
Handles invalid inputs and displays error messages when needed.