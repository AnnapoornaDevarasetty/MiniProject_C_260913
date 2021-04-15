#include "employeemanagement.h"

int search()
{
	int jobcode,i,j;
	system("clear");
	printf("Welcome To Search Of Employee Database \n");
	printf("\n");
	printf("You Can Search Only By Jobcode Of An Employee\n");
    printf("\n");
	printf("Enter Code Of An Employee: ");
	scanf("%d",&jobcode);
	for(i=0;i<=num-1;i++)
	{
		if(emp[i].empID==jobcode)
		{
            printf("Got the Record you were searching for..\n");
            printf("\n");
			printf("Name            Code        Years(EXP)      Age   Designation\n");
 			printf("----------------------------------------------------------------\n");
 			printf("%s",emp[i].name);
	 		j=15-strlen(emp[i].name);
	 		for(;j>0;j--){
	 			printf(" ");
			 }
	 		printf("%5ld",emp[i].empID);
	 		printf("%17d",emp[i].experience);
	 		printf("%10d",emp[i].age);
	 		printf("\t  %s",emp[i].designation);
	 		printf("\n");
		}
        else
        {
            printf("No Record with the given empID is available.Please try again..\n");
        }
	}
	printf("Going to main menu");
	return 0;	
}
