#include "employeemanagement.h"

int sort()
{
    employee *emp, emp1;
    FILE *fp6;
    int i, j;
    fp6 = fopen("employeeData.txt", "r");
    fseek(fp6, 0, SEEK_END);
    int num = ftell(fp6) / sizeof(employee);
    emp = (employee *)calloc(num, sizeof(employee));

    rewind(fp6);

    for (i = 0; i < num; i++)
    {
        fread(&emp[i], sizeof(employee), 1, fp6);
    }
    fclose(fp6);
    for (i = 0; i < num; i++)
    {
        for (j = i; j < num; j++)
        {
            if (emp[i].empID > emp[j].empID)
            {
                emp1 = emp[i];
                emp[i] = emp[j];
                emp[j] = emp1;
            }
        }
    }
    fp6 = fopen("employeeData.txt", "w");
    printf("         **List The Table**");
    printf("\n\n\n");
    printf("Name            EmpID        Years(EXP)      Age   Designation\n");
    printf("----------------------------------------------------------------\n");
    for (i = 0; i < num; i++)
    {
        printf("%s", emp[i].name);
        j = 15 - strlen(emp[i].name);
        for (; j > 0; j--)
        {
            printf(" ");
        }
        printf("%5d", emp[i].empID);
        printf("%17d", emp[i].experience);
        printf("%10d", emp[i].age);
        printf("\t  %s", emp[i].designation);
        printf("\n\n");
        fwrite(&emp[i], sizeof(employee), 1, fp6);
    }
    fclose(fp6);
    return 0;
}