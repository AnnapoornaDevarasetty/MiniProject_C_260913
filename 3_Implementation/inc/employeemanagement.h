/**
 * @file employeemanagement.h
 * @author Devarasetty V S Annapoorna
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
/**
 * @brief 
 * 
 */
typedef struct employee
{
    char name[20];
    int empID;
    char designation[20];
    int experience;
    int age;
} employee;
/**
 * @brief 
 * 
 * @param op 
 * @return int 
 */
int menu(int op);
/**
 * @brief 
 * 
 * @return int 
 */
int build();
/**
 * @brief 
 * 
 * @return int 
 */
int list();
/**
 * @brief 
 * 
 * @param name 
 * @param empID 
 * @param designation 
 * @param experience 
 * @param age 
 * @return int 
 */
int insert(char *name, int empID, char *designation, int experience, int age);
/**
 * @brief 
 * 
 * @param empID 
 * @return int 
 */
int deletes (int empID);
/**
 * @brief 
 * 
 * @param name 
 * @param empID 
 * @param designation 
 * @param experience 
 * @param age 
 * @return int 
 */
int edit(char *name, int empID, char *designation, int experience, int age);
/**
 * @brief 
 * 
 * @param empID 
 * @return int 
 */
int search(int empID);
/**
 * @brief 
 * 
 * @return int 
 */
int sort();


#endif