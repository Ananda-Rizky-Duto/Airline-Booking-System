#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>

void bayar()
{
	system("cls");
	fh=fopen("harga.txt","a+");
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			if(data[i][j].dummykursi =='X')
			{
				o++;
			}
		}
	}
	o=(o*500000)-harga-(canc*500000);
	if (o==0)
	{
		head();
		printf ("Harap pilih tiket terlebih dahulu...\n");
		system ("pause");
		menu();
	}
	head();
	printf ("\n.........................................................................\n");
	printf ("|                                                                       |\n");
	printf ("|  Harga satu tiket adalah Rp. 500000,-                                 |\n");
	printf ("|  Maka yang harus dibayar sebesar Rp. %-10d                       |\n", o);
	printf ("|                                                                       |\n");
	printf (".........................................................................\n");
	printf("Masukan uang yang akan dibayarkan : ");
	scanf ("%d", &p);
	loading();
	
	if (p<o)
	{
A1:		head();
		printf ("Maaf uang yang anda masukkan kurang...\n[1] Masukkan uang kembali\n[2] Kembali ke menu\n\nPilihan anda : ");
		switch(getch())																			//fungsi pemilihan menu
		{
		case '1':
			printf("\n");
			loading();
			bayar();
			break;
			
		case '2':
			printf("\n");
			loading();
			menu();
			break;
			
		default:
			error();
			system("cls");
			goto A1;	
	}
	}
	
	p=p-o;
C1:	head();
	printf("This is your ticket\n");
	
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			if(data[i][j].dummykursi =='X')
			{
				cetak();
				printf ("\n\n");
			}
		}
	}
	
	printf("\n\nKembalian anda sebesar Rp. %d\n\n", p);
	
	o=o+harga;
	fprintf(fh,"%d\n",o);
	fclose(fh);
	
	printf("\nDo you want to print your ticket??\n[1] Print your ticket\n[2] Back to menu\nWhat will you choose : ");
	
		switch(getch())																			//fungsi pemilihan menu
		{
		case '1':
			printf("\n");
			loading();
			head();
			printf("Tiket anda sudah berhasil tercetak\n");
			system("pause");
			loading();
			menu();
			break;
			
		case '2':
			printf("\n");
			loading();
			menu();
			break;
			
		default:
			error();
			system("cls");
			goto C1;
			break;
	}
	
}
