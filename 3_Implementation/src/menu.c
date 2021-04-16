#include "employeemanagement.h"

int menu(int op)
{
    if (!op)
    {

        printf("--------------------------------------\n");
        printf("          ");
        printf("\n***  Employees Management System 1.0 *** ");
        printf("\n");
        printf("             ");
        printf("\nPress  b----> Built The Employee Table ");
        printf("             ");
        printf("\nPress  l----> List The Employee Table  ");
        printf("             ");
        printf("\nPress  i----> Insert New Entry        ");
        printf("             ");
        printf("\nPress  d----> Delete An Entry         ");
        printf("             ");
        printf("\nPress  s----> Search An Entry         ");
        printf("             ");
        printf("\nPress  e----> Edit An Entry         ");
        printf("             ");
        printf("\nPress  e----> Sort the Employee Database         ");
        printf("             ");
        printf("\nPress  q----------> Quit Program              ");
        printf("             ");
        printf("\n\nSelect Your Option Please ====> ");
    }
    return 0;
}