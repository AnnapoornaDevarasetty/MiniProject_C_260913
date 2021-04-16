#include "employeemanagement.h"

int deletes (int empID)         //Deletes a record based on employee ID
{

    FILE *fptemp;
    FILE *fp5;
    employee *emp1;
    emp1 = (employee *)calloc(1, sizeof(employee));
    fp5 = fopen("employeeData.txt", "r");
    fptemp = fopen("tempFile.txt", "w");

    while (fread(emp1, sizeof(employee), 1, fp5))
    {
        if (emp1->empID != empID)       //Comparing the emplyee ID with the gigven input ID
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
    printf("The Record has been deleted successfully\n");
    return 0;
}
