/*******************************************************************************
 * employee.h: 	defines the employee type and the employees alice, bob and eve *
 * 				usage: copy in source code directory and include the header    *
 * 				via #include "employee.h"									   *
 *******************************************************************************/

/* 
	It is NOT necessary at all to understand the contents of this file for solving 
	the exercises on sheet 2. You only need the interface to the employee type, 
	which is described on the sheet. Feel free to scroll through though.
*/

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#include <string.h>

// Makros for random value constraints in 2.1 (b)
#define BONUS_MIN 5000.0
#define BONUS_MAX 25000.0
#define TEAM_SIZE_MIN 10
#define TEAM_SIZE_MAX 50

// Definition of employee data type
typedef struct employee__ {
	char name[BUFSIZ];
	char prename[BUFSIZ];
	char title[BUFSIZ];
	char position[BUFSIZ];
	int age;
	double salary;
	double bonus;
	char section;
	int team_size;
} employee;

// Initialization of three employees alice, bob and eve
employee alice = {
	.name = "Schier",
	.prename = "Alice",
	.title = "Dr.",
	.position = "Chief Executive Officer",
	.age = 35,
	.salary = 200000,
	.bonus = 10000,
	.section = 'C',
	.team_size = 10
};

employee bob = {
	.name = "Gruber",
	.prename = "Bob",
	.title = "Mr.",
	.position = "Head of IT Department",
	.age = 29,
	.salary = 100000,
	.bonus = 5000,
	.section = 'B',
	.team_size = 3
};

employee eve = {
	.name = "Bell",
	.prename = "Eve",
	.title = "Ms.",
	.position = "Security Officer",
	.age = 32,
	.salary = 80000,
	.bonus = 5000,
	.section = 'C',
	.team_size = 2
};

#endif // EMPLOYEE_H_