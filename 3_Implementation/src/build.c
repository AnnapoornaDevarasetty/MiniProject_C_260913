#include "employeemanagement.h"

int build()         //Creats a new database for the employeedata
{
    system("clear");
    employee *emp;
    int i, num;
    FILE *fp1;
    printf("Build the table");
    printf("\n");
    printf("How many entries do you want    -----> ");
    scanf("%d", &num);

    emp = (employee *)calloc(num, sizeof(employee));
    fp1 = fopen("employeeData.txt", "w");

    printf("Enter The Following Items\n");
    for (i = 0; i <= num - 1; i++)
    {
        printf("Name: ");
        scanf("%s", emp[i].name);
        printf("empID: ");
        scanf("%d", &emp[i].empID);
        printf("Designation: ");
        scanf("%s", emp[i].designation);
        printf("Years of Experience: ");
        scanf("%d", &emp[i].experience);
        printf("Age: ");
        scanf("%d", &emp[i].age);
        printf("--------------------------------------\n");
        fwrite(&emp[i], sizeof(employee), 1, fp1);
    }

    printf("Going to main menu");
    fclose(fp1);
    return 0;
}
