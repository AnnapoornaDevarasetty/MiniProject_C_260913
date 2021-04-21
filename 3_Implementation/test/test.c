#include "../unity/unity.h"
#include "../unity/unity_internals.h"
#include"../inc/employeemanagement.h"


int check_menu(int op)
{
    TEST_ASSERT_EQUAL(0,menu(0));
}

//No testcases for build function
int check_build()
{
    
}

//No testcases for list function
int check_list()
{

}

int check_insert(char *name, int empID, char *designation, int experience, int age)
{
    strcpy(name, "employee1");
    empID=101;
    strcpy(designation, "AssociateEngineer");
    experience=3;
    age=25;
    //A record with the give data will be inserted
    TEST_ASSERT_EQUAL(0, insert(name,empID,designation,experience,age));

    strcpy(name, "employee2");
    empID=102;
    strcpy(designation, "TeamLead");
    experience=5;
    age=30;
    //A record with the give data will be inserted
    TEST_ASSERT_EQUAL(0, insert(name,empID,designation,experience,age));
}

int check_deletes (int empID)
{
    empID=101;      
    //If the empID given as same in the list the record will be deleted
    TEST_ASSERT_EQUAL(0,deletes(empID));
}

int check_edit(char *name, int empID, char *designation, int experience, int age)
{
    strcpy(name, "employee2");
    empID=102;
    strcpy(designation, "TeamLead");
    experience=5;
    age=30;
    //The data in the given emplyee ID can be edited
    TEST_ASSERT_EQUAL(0, edit(name,empID,designation,experience,age));

}

int check_search(int empID)
{
    empID=101;      
    //If the empID given as same in the list the record will be displayed
    TEST_ASSERT_EQUAL(0,search(empID));

    empID=123;      //If the empID given does not exists in the list
    TEST_ASSERT_EQUAL(-1,search(empID));
}

//No testcases for build function
int check_sort()
{
    
}

