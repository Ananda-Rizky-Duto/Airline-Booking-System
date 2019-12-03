#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>

void bantuan()
{																						//Menu bantuan untuk user	
	system("cls");
	printf("\n|=============================MENU BANTUAN===============================|");
	printf("\n|________________________________________________________________________|");
	printf("\n|                                                                        |");
	printf("\n|     SILAHKAN PILIH MENU YANG ANDA INGINKAN SESUAI ANGKA YANG TERTERA   |");
	printf("\n|                         DI SAMPING LAYAR                               |");
	printf("\n|                                                                        |");
	printf("\n| Tekan [1] untuk memesan tiket pesawat                                  |");
	printf("\n| Tekan [2] untuk membatalkan pembelian tiket                            |");
	printf("\n| Tekan [3] untuk menu bayar                                             |");
	printf("\n| Tekan [4] untuk menu Bantuan                                           |");
	printf("\n| Tekan [5] untuk menghapus seluruh data                                 |");
	printf("\n| Tekan [6] untuk EXIT                                                   |");
	printf("\n|                                                                        |");
	printf("\n| Pada saat memesan tiket Masukan Baris dan Kolom kursi                  |");
	printf("\n| Contohnya adalah 1 3 di input                                          |");
	printf("\n| maka kursi yang terbooking adalah kursi pada baris ke 1 dan kolom ke 3 |");                                                             
	printf("\n|                                                                        |");
	printf("\n|________________________________________________________________________|\n");
	printf("\nTekan tombol apa saja untuk kembali ke menu . . .\n");
	getch();
	loading();
	menu();																							//selesai menampilkan bantuan akan kembali ke menu utama
}
