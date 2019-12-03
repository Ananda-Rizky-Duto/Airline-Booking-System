#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>

int i, j, k, l, m, n, o=0, p=0, q, r=0, harga, success = 0, canc = 0;
char  namadepaninput[15], namadepan[15], namabelakang[20], notelp[15], s[5], t[5];
FILE *fb;
FILE *fh;
FILE *ff;
FILE *fv;

struct flight
{
	int nomor;
	int kursi;
	int dummykursi;
	char nama_depan[15];
	char nama_belakang[20];
	int kontak[15];
	struct flight *next;
};

struct flight data[100][100];
struct flight *neck = NULL;
