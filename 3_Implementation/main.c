#include "employeemanagement.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    system("clear");
    int op;			//function completed
    char option;
    //Employee Details
    int empID;
    char name[20];
    char designation[20];
    int experience, age;
    int flag = 0;
    employee emp1;
    FILE *fp;
    op = menu(0);
    scanf("%c", &option);
    //The Functions that implemented for the Employee database
    while (option != 'q')
    {
        switch (option)
        {
        case 'b':           //build
            op = build();
            menu(op);
            break;
        case 'l':           //list
            op = list();
            menu(op);
            break;
        case 'i':           //insert
            system("clear");
            printf("Insert New Record\n");
            printf("Enter The Following Items\n");
            printf("Name:  ");
            scanf("%19s", name);
            printf("empID: ");
            scanf("%d", &empID);
            printf("Designation: ");
            scanf("%19s", designation);
            printf("Years of Experience: ");
            scanf("%d", &experience);
            printf("Age: ");
            scanf("%d", &age);
            printf("\n");
            op = insert(name, empID, designation, experience, age);
            menu(op);
            break;
        case 'd':           //delete
            system("clear");
            printf("Delete An Entry\n");
            printf("Enter An JobCode(empID) To Delete That Entry:  \n");
            scanf("%d", &empID);
            fp = fopen("employeeData.txt", "r");
            while (fread(&emp1, sizeof(employee), 1, fp))
            {
                if (emp1.empID == empID)
                {
                    flag = 1;
                    op = deletes (empID);
                }
            }
            if (flag == 0)
            {
                printf("\n\nUnable to find the record..\n");
            }
            flag = 0;
            fclose(fp);
            menu(op);
            break;
        case 'e':           //edit
            system("clear");
            printf("Edit An Entry\n");
            printf("Enter An JobCode(empID) To Edit That Entry: ");
            scanf("%d", &empID);
            fp = fopen("employeeData.txt", "r");
            while (fread(&emp1, sizeof(employee), 1, fp))
            {
                if (emp1.empID == empID)
                {
                    flag = 1;
                    printf("Insert Updated Values\n");
                    printf("Enter The Following Items\n");
                    printf("Name:  ");
                    scanf("%19s", name);
                    printf("Designation: ");
                    scanf("%19s", designation);
                    printf("Years of Experience: ");
                    scanf("%d", &experience);
                    printf("Age: ");
                    scanf("%d", &age);
                    printf("\n");
                    op = edit(name, empID, designation, experience, age);
                }
            }
            if (flag == 0)
            {
                printf("\n\nUnable to find the record..\n");
            }
            flag = 0;
            fclose(fp);
            menu(op);
            break;
        case 's':           //search
            system("clear");
            printf("Welcome To Search Of Employee Database \n");
            printf("\n");
            printf("You Can Search Only By Jobcode Of An Employee\n");
            printf("\n");
            printf("Enter the ID  Of An Employee: ");
            scanf("%d", &empID);
            op = search(empID);
            menu(op);
            break;
        case 'n':           //sort
            system("clear");
            printf("Welcome to sort of Employee Database \n");
            printf("\n");
            printf("The Employee database will be sorted based on Employee ID\n\n");
            op=sort();
            menu(op);
            break;
        }
        scanf("%c", &option);
    }
    return 0;
}
