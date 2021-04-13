#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define max 20

struct employee
{
	char name[20];
	long int empID;
	char designation[20];
	int experience;
	int age;
} employee;
int num;
struct employee emp[max], tempemp[max], sortemp[max], sortemp1[max];

void menu()
{
	// system("clear");
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
	printf("\nPress  q----------> Quit Program              ");
	printf("             ");
	printf("\n\nSelect Your Option Please ====> ");
}

void build()
{
	system("clear");
	int i;
	printf("Build the table");
	printf("\n");
	printf("maximum number of entries  -----  >  20\n");
	printf("how many do you want    -----> ");
	scanf("%d", &num);
	printf("Enter The Following Items\n");
	for (i = 0; i <= num - 1; i++)
	{
		printf("Name: ");
		scanf("%s", emp[i].name);
		printf("empID: ");
		scanf("%ld", &emp[i].empID);
		printf("Designation: ");
		scanf("%s", emp[i].designation);
		printf("Years of Experience: ");
		scanf("%d", &emp[i].experience);
		printf("Age: ");
		scanf("%d", &emp[i].age);
		printf("--------------------------------------\n");
	}
	printf("Going to main menu");
}

void list()
{
	int i, j;
	char ch;
	printf("         ***List The Table***");
	printf("\n");
	printf("Name            Code        Years(EXP)      Age   Designation\n");
	printf("----------------------------------------------------------------\n");
	for (i = 0; i <= num - 1; i++)
	{
		printf("%s", emp[i].name);
		j = 15 - strlen(emp[i].name);
		for (; j > 0; j--)
		{
			printf(" ");
		}
		printf("%5ld", emp[i].empID);
		printf("%17d", emp[i].experience);
		printf("%10d", emp[i].age);
		printf("\t  %s", emp[i].designation);
		printf("\n");
	}
}

void insert()
{
	system("clear");
	int i = num;
	num += 1;
	printf("Insert New Record\n");
	printf("Enter The Following Items\n");
	printf("Name:  ");
	scanf("%s", emp[i].name);
	printf("empID: ");
	scanf("%ld", &emp[i].empID);
	printf("Designation: ");
	scanf("%s", emp[i].designation);
	printf("Years of Experience: ");
	scanf("%d", &emp[i].experience);
	printf("Age: ");
	scanf("%d", &emp[i].age);
	printf("\n");
	printf("The Record has been inserted successfully\n");
	printf("Going to main menu");
}

void delete ()
{
	system("clear");
	int code;
	int check=-1;
	printf("Delete An Entry\n");
	printf("Enter An JobCode(empID) To Delete That Entry:  \n");
	scanf("%d", &code);
	int i;
	for (i = 0; i <= num - 1; i++)
	{
		if (emp[i].empID == code)
		{
			check = i;
		}
	}
	if(check==-1)
	{
		printf("Unable to find the Record.Please try again...\n");
	}
	for (i = 0; i <= num - 1; i++)
	{
		if (i == check)
		{
			printf("The Record with this EmpID is deleted.");
			continue;
		}
		else
		{
			if (i > check)
			{
				tempemp[i - 1] = emp[i];
			}
			else
			{
				tempemp[i] = emp[i];
			}
		}
	}
	num--;
	for (i = 0; i <= num - 1; i++)
	{
		emp[i] = tempemp[i];
	}
}

int main()
{
	system("clear");
	char option;
	menu();
	scanf("%c", &option);
	while (option != 'q')
	{
		switch (option)
		{
		case 'b':
			build();
			system("clear");
			menu();
			break;
		case 'l':
			list();
			menu();
			break;
		case 'i':
			insert();
			menu();
			break;
		case 'd':
			delete ();
			menu();
			break;
		}
		scanf("%c", &option);
	}
	return 0;
}
