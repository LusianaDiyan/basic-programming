#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<string.h>
#include<conio.h>

/*
int hitung_tahun(int tahun) {
	int totHari = 0, thn;
	for (thn = 1900; thn < tahun; thn++) {
		if (thn % 4 == 0) {
			totHari += 366;
		}
		else {
			totHari += 365;
		}
	}
	return(totHari);
}

int jml_bulan(int tahun, int bulan) {
	int jmlHari = 0, month;
	for (month = 1; month < bulan; month++)
	{
		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		{
			jmlHari += 31;
		}
		else if (month == 4 || month == 6 || month == 9 || month == 11)
		{
			jmlHari += 30;
		}
		else
		{
			if (tahun % 4)
			{
				jmlHari += 29;
			}
			else
			{
				jmlHari += 28;
			}
		}
	}
	return(jmlHari);
}
*/
int total_hari(int month, int tahun)
{
	int tothari = 0;
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
		tothari += 31;
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11) {
		tothari += 30;
	}
	else if (tahun % 4 == 0 && tahun % 100 != 0 || tahun % 400 == 0) { //kabisat
		tothari += 29;
	}
	else{
			tothari += 28;
	}
	return(tothari);
}
/*
int lihat_hari(int jmlHari) {
	int hari = jmlHari % 7;
	return(hari);
}


void kalender(int tahun, int bulan, int awal_tanggal)
{
	int day, month;
	for (month = 1; month <= bulan; month++)
	{
		if (month == bulan) {

			printf("%s", bulanan[month]);
			printf("\n===================================================================================\n");
			printf("\n Min\t  Sen\t  Sel\t  Rab\t  Kam\t  Jum\t  Sab\t \n");
			printf("\n===================================================================================\n");

			// menentukan posisi awal dari tanggal 1
			for (day = 1; day <= 1 + awal_tanggal * 5; day++)
			{
				printf(" ");
			}

			// menamplakan tanggal 1 sampai selesai sesuai array
			for (day = 1; day <= tanggalan[month]; day++)
			{
				printf("%2d", day);

				// batas kalau hari nya sudah sampai 7 akan di taruh bawahnya
				if ((day + awal_tanggal) % 7 > 0)
					printf("   ");
				else
					printf("\n ");
			}
		}
		// fungsi ini akan ikut di looping untuk menyesuaikan tanggal awal dari bulan yang di input
		awal_tanggal = (awal_tanggal + tanggalan[month]) % 7;
	}
}
*/
int main()
{
	char nama_bulan[12][25] = { "JANUARI" ,"FEBRUARI" ,"MARET", "APRIL","MEI","JUNI","JULI","AGUSTUS", "SEPTEMBER", "OKTOBER", "NOVEMBER", "DESEMBER" };

	int awal_tanggal, bulan, tahun, tanggal;
	int year, thn=0, bln =0, hari, minggu=1;
	int jmlHari, day, jumlah_hari;
	int count = 0;

	printf("===================== PROGRAM KALENDER =========================");
	printf("\n\n Masukkan tahun : ");
	scanf_s("%d", &tahun);
	if (tahun < 0)
	{
		printf("Error: Tahun harus lebih dari 0");
		return scanf_s("%d", &tahun);
	}
	printf("\n Masukkan bulan : ");
	scanf_s("%d", &bulan);
	if (bulan < 1 || bulan > 12)
	{
		printf("Error: Masukkan angka 1 sampai 12");
		return printf("\n Bulan berapa : ");
		scanf_s("%d", &bulan);
	}

	printf("\n Masukkan tanggal : ");
	scanf_s("%d", &tanggal);
	if (tanggal < 0)
	{
		printf("Error: Tahun harus lebih dari 0");
		return scanf_s("%d", &tanggal);
	}

	printf("\n\n  ==------------'%d'------------==\n", tahun);
	printf("==-------------BULAN '%s'-------------==\n", nama_bulan[bulan - 1]);

	//menghitung total hari dalam 1 tahun
	for (year = 0; year < tahun; year++)
	{
		if (tahun % 4 == 0 && tahun % 100 != 0 || tahun % 400 == 0) //menghitung kabisat
		{
			thn += 366;
		}
		else {
			thn += 365;
		}
	}

	for (bln = 0; bln < bulan; bln++)
	{
		hari = total_hari(bln, tahun);
		thn += hari;
	}
	hari = thn % 7;
	/*
	jmlHari = hitung_tahun(tahun) + jml_bulan(tahun, bulan);
	day = lihat_hari(jmlHari);
	jumlah_hari = total_hari(bulan, tahun);
	*/
	printf("\n===================================================================================\n");
	printf("Minggu Senin Selasa Rabu Kamis Jumat Sabtu");
	printf("\n===================================================================================\n");

	//mengatur tampilan tanggal
	int j;

	for (int i = 1; i <= total_hari(bulan, tahun); i++, minggu++)
	{
		if (i == 1)
		{
			if (hari == 0) {
				for (j = 1; j < 7; j++, minggu++)
				{
					printf("%6s", "");
				}
			}
			else
			{
				for ( j = 1; j < hari; j++, minggu++)
				{
					printf("%6s", "");
				}
			}
		}
		printf("%6d", i);
		if (minggu % 7 ==0)
		{
			printf("\n");
		}
	}

	//menampilkan zodiak
	if (tanggal >= 20 && bulan == 1 || tanggal <= 18 && bulan == 2) {
		printf("\n\nZodiak tanggal %d bulan %d adalah Aquarius \n", tanggal, bulan);
	}
	else if (tanggal <= 29 && bulan == 2 || tanggal <= 20 && bulan == 3) {
		printf("\n\nZodiak tanggal %d bulan %d adalah Pisces \n", tanggal, bulan);
	}
	else if (tanggal <= 31 && bulan == 3 || tanggal <= 19 && bulan == 4) {
		printf("\n\nZodiak tanggal %d bulan %d adalah Aries \n", tanggal, bulan);
	}
	else if (tanggal <= 30 && bulan == 4 || tanggal <= 20 && bulan == 5) {
		printf("\n\nZodiak tanggal %d bulan %d adalah Taurus \n", tanggal, bulan);
	}
	else if (tanggal <= 31 && bulan == 5 || tanggal <= 21 && bulan == 6) {
		printf("\n\nZodiak tanggal %d bulan %d adalah Gemini \n", tanggal, bulan);
	}
	else if (tanggal <= 30 && bulan == 6 || tanggal <= 22 && bulan == 7) {
		printf("\n\nZodiak tanggal %d bulan %d adalah Cancer \n", tanggal, bulan);
	}
	else if (tanggal <= 31 && bulan == 7 || tanggal <= 22 && bulan == 8) {
		printf("\n\nZodiak tanggal %d bulan %d adalah Leo \n", tanggal, bulan);
	}
	else if (tanggal <= 31 && bulan == 8 || tanggal <= 22 && bulan == 9) {
		printf("\n\nZodiak tanggal %d bulan %d adalah Virgo \n", tanggal, bulan);
	}
	else if (tanggal <= 30 && bulan == 9 || tanggal <= 23 && bulan == 10) {
		printf("\n\nZodiak tanggal %d bulan %d adalah Libra \n", tanggal, bulan);
	}
	else if (tanggal <= 31 && bulan == 10 || tanggal <= 21 && bulan == 11) {
		printf("\n\nZodiak tanggal %d bulan %d adalah Scorpio \n", tanggal, bulan);
	}
	else if (tanggal <= 30 && bulan == 11 || tanggal <= 21 && bulan == 12) {
		printf("\n\nZodiak tanggal %d bulan %d adalah Sagitarius \n", tanggal, bulan);
	}
	else if (tanggal <= 31 && bulan == 12 || tanggal < 20 && bulan == 1) {
		printf("\n\nZodiak tanggal %d bulan %d adalah Capricorn \n", tanggal, bulan);
	}
	
	/*
	awal_tanggal = menghitung_awal_tanggal(tahun);
	kalender(tahun, bulan, awal_tanggal);
	*/

	//mnentukan pasaran
	/*
	for (int i = 1; i <= jumlah_hari; i++) {
		printf("%d\t", i);

		if (hari % 7 == 6)
		{
			printf("\n");
			
			for (int i = 0; i <= 7 ; i++)
			{
				switch (jmlHari % 5)
				{
				case 1:
					printf("PAHING");
					break;
				case 2:
					printf("PON ");
					break;
				case 3:
					printf("WAGE");
					break;
				case 4:
					printf("KLIWON");
					break;
				case 0:
					printf("LEGI ");
					break;
				default:
					printf("ERROR");
					break;
				}
				jmlHari++;
				count++;

				if (count == 7)
				{
					printf("\n");
					count = 0;
				}
			}
		}

		//jmlHari++;
		if (hari % 7 == 6)
			printf("\n");
		hari++;
	}
	*/
	
	_getch();
	system("pause");
}
