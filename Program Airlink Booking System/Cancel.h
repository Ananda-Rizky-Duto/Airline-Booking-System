#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>

void cancel()
{
	struct flight *ptr = neck;
	head();
	printf("\n Berikut datan penerbangan yang ada:\n");
	printf("\n %-3s %-15s %-20s %-15s %-5s\n\n", "No.", "Nama Depan", "Nama Belakang", "No. Telfon", "Flight");
	k = 1;
	while(ptr != NULL) 
	{        
		printf(" %-3d %-15s %-20s %-15s AL%d%d1\n", k, ptr->nama_depan, ptr->nama_belakang, ptr->kontak, ptr->kursi, ptr->dummykursi);
		k++;
		r++;
		ptr = ptr->next;
	}
	
	if (r == 0)
	{
		printf("\n (           Pilih Kursi Terlebih Dahulu           )\n\n ");
		system("pause");
		loading();
		menu();
	}
	
	fb=fopen("bangku.txt","r+");
	ff=fopen("flight.txt","r+");
	fv=fopen("temp.txt","w");
	printf("\n Masukkan nama depan yang ingin dibatalkan: ");
	scanf("%s", namadepaninput);
	
	while(fscanf(ff,"%s %s %s %s %s", namadepan, namabelakang, notelp, s, t) != EOF)
	{
		if (strcmp(namadepaninput, namadepan)==0)
		{
			success++;
			continue;
		}
		fprintf(fv,"%s %s %s %s %s", namadepan, namabelakang, notelp, s, t);
	}
	fclose(ff);
	fclose(fv);
	fclose(fb);

	
	if (success == 1)
	{
		ff=fopen("flight.txt","w");
		fv=fopen("temp.txt","r");
		while(fscanf(fv,"%s %s %s %s %s", namadepan, namabelakang, notelp, s, t) != EOF)
		{
	        fprintf(ff,"%s %s %s %s %s", namadepan, namabelakang, notelp, s, t);
	    }
		fclose(ff);
		fclose(fv);
	    printf("\n Data penerbangan berhasil dibatalkan\n ");
		system("pause");
		loading();
	    remove("temp.txt");
	    remove("temp2.txt");
	    canc++;
    	main();
	}
	
	if (success == 0)
	{
G1:		printf(" Data tidak ditemukan\n [1] Masukkan nama lagi\n [2] Kembali ke memu");
		switch(getch())																		
		{
			case '1':
				printf("\n");
				loading();
				cancel();
				break;
		
			case '2':
				printf("\n");
				loading();
				menu();
				break;
			
			default:
				error();
				system("cls");
				goto G1;
				break;	
		}	
	}
}
