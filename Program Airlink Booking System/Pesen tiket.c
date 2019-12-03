//https://github.com/DarrellYonathan/Airlink-Booking-System.git

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>
#include "Deklarasi.h"			//Kumpulan semua dekralasi
#include "Input.h"				//Fungsi untuk mengisi multidimentional array
#include "File.h"				//Fungsi untuk membuat dan membaca file
#include "Loading.h"			//Fungsi untuk loading menu
#include "Head.h"				//Fungsi untuk menampilkan header pada beberapa modular
#include "Error.h"				//Fungsi untuk menampilkan pesan error
#include "Cetak.h"				//Fungsi untuk mencetak tiket pesawat
#include "Exit.h"				//Fungsi untuk keluar dari program
#include "Bantuan.h"			//Fungsi untuk menampilkan bantuan
#include "Bayar.h"				//Fungsi untuk menghitung biaya dari tiket yang dipesan
#include "Pesan.h"				//Fungsi untuk pemesanan tiket pesawat							
#include "Cancel.h"				//Fungsi untuk membatalkan pemesanan tiket
#include "Admin.h"				//Fungsi untuk menghapus file txt
#include "Menu.h"				//Fungsi untuk menampilkan menu

main()
{
	system("COLOR 1F");						//fungsi untuk mengubah warna background
	head();
	printf ("\n");
	loading();
	input();
	file();
	menu();
}
