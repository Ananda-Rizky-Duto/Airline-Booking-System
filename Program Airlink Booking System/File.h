#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>

void file()
{
	fb=fopen("bangku.txt","a");	
	fh=fopen("harga.txt","a");
	ff=fopen("flight.txt","a");
	fclose(fb);
	fclose(fh);
	fclose(ff);
	fh=fopen("harga.txt","r+");
	ff=fopen("flight.txt","r+");
	if(l==0)
	{
		fprintf(fh,"%d\n",l);
		i++;
	}
	fclose(fh);
	fclose(ff);
	fb=fopen("bangku.txt","r");	
	ff=fopen("flight.txt","r");
	fh=fopen("harga.txt","r");
	while (!feof (fb))
	{
		fscanf(fb,"%d %d",&i,&j);
		while (!feof (ff))
		{
			fscanf(ff,"%s %s %s %s %s", namadepan, namabelakang, notelp, s, t);
			data[i][j].kursi = 'X';
			strcpy(data[i][j].nama_depan, namadepan);
			strcpy(data[i][j].nama_belakang, namabelakang);
			strcpy(data[i][j].kontak, notelp);
		}
	}
	while (!feof (fh))
	{  
		fscanf(fh, "%d", &harga);      
    }
	fclose(fb);
	fclose(fh);
}
