#include "employeemanagement.h"

int build()
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
	return 0;
}