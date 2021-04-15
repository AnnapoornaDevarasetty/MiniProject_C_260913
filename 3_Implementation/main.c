#include "employeemanagement.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define max 20

int main()
{
	system("clear");
	int x;
	char option;
	menu();
	scanf("%c", &option);
	while (option != 'q')
	{
		switch (option)
		{
		case 'b':
			x=build();
			system("clear");
			menu();
			break;
		case 'l':
			x=list();
			menu();
			break;
		case 'i':
			x=insert();
			menu();
			break;
		case 'd':
			x=deletes();
			menu();
			break;
		case 's':
			x=search();
			menu();
			break;
		}
		scanf("%c", &option);
	}
	return 0;
}
