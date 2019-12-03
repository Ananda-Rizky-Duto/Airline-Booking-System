#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>

void admin()
{
	int password=12345,z;
	head();
	printf("\nMasukkan password admin : ");
	scanf("%d",&z);
	loading();
	if(z==password)
	{
		fb=fopen("bangku.txt","w");	
		fclose(fb);
		fh=fopen("harga.txt","w");
		fclose(fh);
		fh=fopen("flight.txt","w");
		fclose(ff);
		head();
		printf("\n\nFile berhasil terhapus!\n\n");
		system ("pause");
		system ("cls");
		main();
	}
	if (z!=password)
	{
		printf("\n\nPassword yang anda masukkan salah!\n");
		system ("pause");
		loading();
		menu();
	}
}
