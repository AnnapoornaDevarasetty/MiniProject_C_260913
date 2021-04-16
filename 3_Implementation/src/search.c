#include "employeemanagement.h"

int search(int empID)
{
    int i, j;
    employee emp;
    int flag = 0;
    FILE *fp4;
    fp4 = fopen("employeeData.txt", "r");
    while (fread(&emp, sizeof(employee), 1, fp4))
    {
        if (emp.empID == empID)
        {
            printf("         ***List The Table***");
            printf("\n\n\n");
            printf("Name            EmpID        Years(EXP)      Age   Designation\n");
            printf("----------------------------------------------------------------\n");

            flag = 1;
            printf("%s", emp.name);
            j = 15 - strlen(emp.name);
            for (; j > 0; j--)
            {
                printf(" ");
            }
            printf("%5d", emp.empID);
            printf("%17d", emp.experience);
            printf("%10d", emp.age);
            printf("\t  %s", emp.designation);
            printf("\n\n");
        }
    }
    if (flag == 0)
    {
        return -1;
    }
    fclose(fp4);
    return 0;
}
