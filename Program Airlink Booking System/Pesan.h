#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>

void pesan ()
{
	fb=fopen("bangku.txt","a+");
	system("cls");
	head();
	printf ("\n| 1 || 2 || 3 || 4 || 5 |       | 6 || 7 || 8 || 9 || 10 |");
	printf ("\n_________________________       _________________________\n");
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			printf("| %c |", data[i][j].kursi);
			
			if (j==4)
			{
				printf ("       ");
			}
			
			if (j==9)
			{
				printf ("  | %d |", i+1);
				printf ("\n_________________________       _________________________");
			}	
		}
		
		printf("\n");	
	}
		
	printf("\nKursi yang telah di pesan akan muncul sebagai X\nMasukkan [ -1 (spasi) -1 ] lalu tekan enter untuk keluar\nMasukkan [ (1-10) (spasi) (1-10) ] untuk memesan kursi :");
	scanf("%d %d",&m,&n);
	loading();
	
	if (m == -1 || n == -1)
	{
		menu();
	}
	
	if (m>10 || n>10 || m<-1 || n<-1)
	{
		error();
		getch();
		pesan();
	}

	if (data[m-1][n-1].kursi =='X')
	{
		head();
		printf("\nMaaf, Kursi telah dipesan sebelumnya. silahkan pilih kursi yang lain!\n");
		system ("pause");
		pesan ();
	}
	
	data[m-1][n-1].kursi ='X';
	data[m-1][n-1].dummykursi ='X';
	i=m-1;
	j=n-1;
	fprintf(fb,"%d %d\n", i, j);
	fclose(fb);
	
	system("cls");
	head();
	printf("\nMasukkan nama depan : ");
	scanf("%s", data[i][j].nama_depan);
	printf("Masukkan nama belakang : ");
	scanf("%s", data[i][j].nama_belakang);
	printf("Masukkan nomor telfon : ");
	scanf("%s", data[i][j].kontak);
	struct flight *link = (struct flight*) malloc(sizeof(struct flight));
	strcpy(link->nama_depan, data[i][j].nama_depan);
	strcpy(link->nama_belakang, data[i][j].nama_belakang);
	strcpy(link->kontak, data[i][j].kontak);
	link->kursi = i;
	link->dummykursi = j;
	link->next = neck;
	neck = link;
	ff=fopen("flight.txt","a+");
	fprintf(ff,"%s %s %s %d %d\n", data[i][j].nama_depan, data[i][j].nama_belakang, data[i][j].kontak, m-1, n-1);
	fclose(ff);
	printf("\n|----------------------------------------------------------------|\n");
	printf("|    Terima Kasih, Kursi pada Baris %-2d Kolom %-2d telah dipesan    |\n",i+1,j+1);
	printf("|________________________________________________________________|\n");
	
B1:	printf("\nMasukan Angka\n[1] Pilih lagi\n[2] Bayar\n[3] Kembali ke menu (cancel)\n\nMasukkan pilihan anda : \n");
	switch(getch())																		
	{
		case '1':
			printf("\n");
			loading();
			pesan();
			break;
		
		case '2':
			printf("\n");
			loading();
			bayar();
			break;
			
		case '3':
			printf("\n");
			loading();
			menu();
			break;
			
		default:
			error();
			system("cls");
			goto B1;
			break;	
	}
}
