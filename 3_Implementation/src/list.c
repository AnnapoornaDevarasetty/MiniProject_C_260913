#include "employeemanagement.h"

int list()
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
	return 0;
}
