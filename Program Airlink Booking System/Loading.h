#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>

void loading()
{
	printf("Loading ");
	for (i=0;i<5;i++)
	{
		printf(". ");
		Sleep(200);
	}
	system("cls");
}
