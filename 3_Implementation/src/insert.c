#include "employeemanagement.h"

int insert(char *name, int empID, char *designation, int experience, int age)
{
    employee *emp;
    FILE *fp3;
    emp = (employee *)calloc(1, sizeof(employee));
    fp3 = fopen("employeeData.txt", "a");
    strcpy(emp->name, name);
    emp->empID = empID;
    strcpy(emp->designation, designation);
    emp->experience = experience;
    emp->age = age;
    fwrite(emp, sizeof(employee), 1, fp3);
    printf("The Record has been inserted successfully\n");
    printf("Going to main menu");
    fclose(fp3);
    //fwrite();
    return 0;
}