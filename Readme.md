# Hostel Management System

This C++ program is a **Hostel Management System** that allows for managing student records within a hostel. It provides functionalities to add, remove, and display students, along with their assigned hostel beds. The system handles a maximum capacity of 50 beds, allocating them on a first-come, first-served basis. This project demonstrates object-oriented programming concepts and basic data handling in C++.

## Features

### 1. Add Student
- Adds a new student to the hostel by name and roll number.
- Allocates a bed if available, with a success message.
- Displays "Hostel is full" if the maximum capacity (50 beds) is reached.

### 2. Remove Student
- Removes a student based on their roll number.
- Frees up the bed, making it available for future allocations.
- Shows an error message if the student is not found.

### 3. Display Students
- Lists all students currently residing in the hostel.
- Displays each student's name and roll number, or a message if no students are present.

### 4. Input Validation
- Ensures valid input for roll numbers (positive integers) and choices.
- Handles invalid inputs gracefully, prompting the user for valid data.

## Code Structure

The program is implemented using a `Hostel` class with the following components:

### Class Members
- **Attributes**:
  - `name`, `rollNo`: Student details.
  - `bed` (static): Tracks available beds.
  - `ve` (static vector): Stores the list of students.
- **Static Members**:
  - `bed`: Tracks the number of beds currently allocated.
  - `ve`: Holds the list of students in the hostel.
- **Constants**:
  - `maxBeds`: Specifies the maximum capacity of 50 beds.

### Class Methods
- `bedStatus()`: Checks if a bed is available.
- `add()`: Adds a new student and calls `allocation()` to assign a bed.
- `allocation()`: Allocates a bed if available, displaying either a success or full message.
- `remove()`: Finds and removes a student by roll number.
- `display()`: Lists all students with their names and roll numbers.

### Main Function
- Provides a menu-driven interface for user interaction.
- Allows the user to add, remove, and display students or exit the program.
- Handles invalid inputs and displays appropriate error messages.


