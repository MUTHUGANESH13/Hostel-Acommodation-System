# Hostel Accommodation System

This is a C++ program that simulates a hostel accommodation management system. It allows students to reserve beds in a hostel and displays relevant details about the hostel and student.

## Features

- **Hostel Information**: Displays the name of the hostel, rent, and available beds.
- **Student Reservation**: Allows students to reserve a bed by entering their name, roll number, and address.
- **Reservation Handling**: Decreases the number of available beds when a reservation is made.
- **Exit Option**: Provides an option to exit the program.

## How It Works

1. The system displays the hostel name, rent, and the number of available beds.
2. The user (a student) is prompted to reserve a bed.
3. The student provides their details: Name, Roll Number, and Address.
4. If beds are available, the system reserves a bed and displays the student's details along with the remaining number of beds.
5. If no beds are available, the system informs the user that no beds are left.
6. The program continues to run until the user chooses to exit.

## Sample Output

```bash

  Hostel Name: 3star
	Rent: 5000
	Available Beds: 2

	Welcome To Hostel Accommodation System
	**************************************
	1. Reserve A Bed.
	2. Exit.

	Enter Choice: 1
	Enter Name of Student: re
	Enter RollNo of Student: 2
	Enter Address of Student: dr
	Bed Reserved Successfully!

	Student Details:
	Name: re
	RollNo: 2
	Address: dr
	Remaining Beds: 1

	Welcome To Hostel Accommodation System
	**************************************
	1. Reserve A Bed.
	2. Exit.

	Enter Choice: 1
	Enter Name of Student: rd
	Enter RollNo of Student: 4
	Enter Address of Student: bg
	Bed Reserved Successfully!

	Student Details:
	Name: rd
	RollNo: 4
	Address: bg
	Remaining Beds: 0

	Welcome To Hostel Accommodation System
	**************************************
	1. Reserve A Bed.
	2. Exit.

	Enter Choice: 1
	Enter Name of Student: 43
	Enter RollNo of Student: fe
	Enter Address of Student: de
	Sorry, Bed Not Available!

	Welcome To Hostel Accommodation System
	**************************************
	1. Reserve A Bed.
	2. Exit.

	Enter Choice: 2

```
