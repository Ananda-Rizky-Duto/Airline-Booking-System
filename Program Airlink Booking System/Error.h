#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>

void error()
{
	system("cls");
	printf("\n\n\n");
	printf("\n          |---------------------------------------------------------|");
	printf("\n          | PESAN STATUS:                                           |");
	printf("\n          |                                                         |");
	printf("\n          | Maaf, tolong masukkan pilihan sesuai angka yang tertera |");
	printf("\n          | Terima kasih.                                           |");
	printf("\n          |_________________________________________________________|");
	printf("\n\n\n Tekan tombol apa saja untuk melanjutkan . . .");
	getch();
}
