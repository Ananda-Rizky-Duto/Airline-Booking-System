#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>

void menu()
{															//Menu utama
	system("cls");
	printf("\n|===========================TICKET.ID============================|");
	printf("\n|                          MENU  UTAMA                           |");
	printf("\n|________________________________________________________________|");
	printf("\n\n  Silahkan pilih:\n");
	printf("  [1] Pemesanan Tiket\n");
	printf("  [2] Batalkan pemesanan\n");
	printf("  [3] Bayar\n");
	printf("  [4] Bantuan\n");
	printf("  [5] Admin\n");
	printf("  [6] Exit\n");
	printf("\n  Pilih opsi sesuai angka yang tertera di samping layar \n");
	printf("  Pilihan anda: ");
	switch(getch())																			//fungsi pemilihan menu
	{
		case '1':
			printf("\n  ");
			loading();
			pesan();
			break;
			
		case '2':
			printf("\n  ");
			loading();
			cancel();
			break;

		case '3':
			printf("\n  ");
			loading();
			bayar();
			break;
						
		case '4':
			printf("\n  ");
			loading();
			bantuan();
			break;
			
		case '5':
			printf("\n  ");
			loading();
			admin();
			break;
			
		case '6':
			printf("\n  ");
			loading();
			ex();
			break;
			
		default:
			error();
			getch();
			menu();	
			break;
	}
}

