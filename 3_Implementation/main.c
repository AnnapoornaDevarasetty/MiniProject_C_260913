#include "employeemanagement.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define max 20

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
			deletes();
			menu();
			break;
		case 's':
			search();
			menu();
			break;
		}
		scanf("%c", &option);
	}
	return 0;
}
