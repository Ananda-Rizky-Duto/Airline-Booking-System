#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>

void cetak()
{	
	printf("\n          _____________________________________________________________________________");
	printf("\n          |                                                             Airlink Flight|");
	printf("\n          | General Information                                                       |");
	printf("\n          |                                                                           |");
	printf("\n          | Flight    : AL%d%d1                                                         |",i+1,j+1);
	printf("\n          | Seat      : %-2d - %-2d                                                       |",i+1,j+1);
	printf("\n          | Gate      : A6                                                            |");
	printf("\n          | Name      : %-10s %-10s                                         |", data[i][j].nama_depan,data[i][j].nama_belakang);
	printf("\n          | Phone     : %-15s                                	              |", data[i][j].kontak);
	printf("\n          |                                                                           |");
	printf("\n          | Gate closed 15 minutes                                                    |");
	printf("\n          |                                                                           |");
	printf("\n          | Please be at boarding gate at least 30 minutes before boarding time       |");
	printf("\n          |___________________________________________________________________________|");			
}
