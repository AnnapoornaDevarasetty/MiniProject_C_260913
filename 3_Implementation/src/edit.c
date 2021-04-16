#include "employeemanagement.h"

//Editing the records of the employee
int edit(char *name, int empID, char *designation, int experience, int age)
{
    FILE *fptemp;
    FILE *fp5;
    fptemp = fopen("tempFile.txt", "w");
    employee *emp, *emp1;
    emp = (employee *)calloc(1, sizeof(employee));
    emp1 = (employee *)calloc(1, sizeof(employee));
    strcpy(emp->name, name);
    emp->empID = empID;
    strcpy(emp->designation, designation);
    emp->experience = experience;
    emp->age = age;
    fwrite(emp, sizeof(employee), 1, fptemp);
    fclose(fptemp);
    fp5 = fopen("employeeData.txt", "r");
    fptemp = fopen("tempFile.txt", "a");

    while (fread(emp1, sizeof(employee), 1, fp5))
    {
        if (emp1->empID != empID)
        {
            fwrite(emp1, sizeof(employee), 1, fptemp);
        }
    }
    fclose(fp5);
    fclose(fptemp);

    fp5 = fopen("employeeData.txt", "w");
    fptemp = fopen("tempFile.txt", "r");

    while (fread(emp1, sizeof(employee), 1, fptemp))
    {
        fwrite(emp1, sizeof(employee), 1, fp5);
    }
    fclose(fp5);
    fclose(fptemp);
    printf("The Record has been updated successfully\n");
    return 0;
}
