#include "employeemanagement.h"

int insert()
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
	return 0;
}