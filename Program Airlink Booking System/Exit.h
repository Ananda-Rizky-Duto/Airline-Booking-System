#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>

void menu();

void ex()
{
	system("cls");
	head();
	printf("\n\n  Apakah anda yakin ingin keluar?\n");
	printf("  Jika ya, ketik [1]\n  Jika ingin kembali ke menu utama, silahkan ketik [2]\n");
	printf("\n  ");
	switch(getch())																			//fungsi pemilihan menu
	{
		case '1':
			printf("\n\n\n");
			printf("\t\t\t\t\t\t");
			loading();
			system("cls");
			printf("\nTerima kasih telah menggunakan program ini.\n");
			printf("\n\n\n\n\n\nCreated by: Ananda Rizky Duto Pamungkas & Darrell Yonathan");
			getch();
			exit(0);
			break;
			
		case '2':
			printf("\n");
			loading();
			menu();
			break;
			
		default:
			error();
			system("cls");
			ex();
			break;
	}
}

