#include "employeemanagement.h"

int list()
{
    system("clear");
    int i, j;
    employee emp;
    FILE *fp2;
    fp2 = fopen("employeeData.txt", "r");
    printf("         ***List The Table***");
    printf("\n");
    printf("Name            EmpID        Years(EXP)      Age   Designation\n");
    printf("----------------------------------------------------------------\n");
    while (fread(&emp, sizeof(employee), 1, fp2))
    {
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
        printf("\n");
    }
    printf("\n\n");
    fclose(fp2);
    return 0;
}
