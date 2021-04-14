/**
 * @file employeemanagement.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __EMPLOYEEMANAGEMENT_H__
#define __EMPLOYEEMANAGEMENT_H__


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define max 20
/**
 * @brief 
 * 
 */
struct employee
{
	char name[20];          //Employee Name
	long int empID;         //Employee ID
	char designation[20];   //Designation of the Employee
	int experience;         //Experience of the employee
	int age;                //Age of the employee
} employee;

/**
 * @brief 
 * 
 */
int num;                    //Number of Employees
struct employee emp[max], tempemp[max], sortemp[max], sortemp1[max];

/**
 * @brief 
 * 
 */
void menu();
/**
 * @brief 
 * 
 */
void build();
/**
 * @brief 
 * 
 */
void list();
/**
 * @brief 
 * 
 */
void insert();
/**
 * @brief 
 * 
 */
void deletes();
/**
 * @brief 
 * 
 */
void search();


#endif