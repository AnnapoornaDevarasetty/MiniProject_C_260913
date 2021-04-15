#include "employeemanagement.h"

int deletes()
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
	return 0;
}