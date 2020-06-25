#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<iostream>
#include<conio.h>
using namespace std;

int menghitung_hari_setahun(int tahun) {
	int jml_hari = 0, year;
	for (year = 1900; year < tahun; year++) {
		if (year % 4 == 0) {
			jml_hari += 366;
		}
		else {
			jml_hari += 365;
		}
	}
	return(jml_hari);
}

int menghitung_hari_sebulan(int tahun, int bulan) {
	int jml_hari = 0, Month;
	for (Month = 1; Month < bulan; Month++)
	{
		if (Month == 1 || Month == 3 || Month == 5 || Month == 7 || Month == 8 || Month == 10 || Month == 12) {
			jml_hari += 31;
		}
		else if (Month == 4 || Month == 6 || Month == 9 || Month == 11) {
			jml_hari += 30;
		}
		else {
			if (tahun % 4 == 0) {
				jml_hari += 29;
			}
			else
				jml_hari += 28;
		}
	}
	return(jml_hari);
}

int hari_seminggu(int jml_hari) {
	int Day = jml_hari % 7;
	return(Day);
}

int hitung_hari(int month, int tahun)
{
	int jml_hari = 0;
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
		jml_hari += 31;
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11) {
		jml_hari += 30;
	}
	else {
		if (tahun % 4 == 0)
			jml_hari += 29;
		else
			jml_hari += 28;
	}
	return(jml_hari);
}
int main()
{
	char nama_bulan[12][25] = { "JANUARI" ,"FEBRUARI" ,"MARET", "APRIL","MEI","JUNI","JULI","AGUSTUS", "SEPTEMBER", "OKTOBER", "NOVEMBER", "DESEMBER" };

	int bulan, tahun, tanggal;
	int thn, bln, jml_hari, jumlah_hari, Day;

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


	jml_hari = menghitung_hari_setahun(tahun) + menghitung_hari_sebulan(tahun, bulan);
	Day = hari_seminggu(jml_hari);
	jumlah_hari = hitung_hari(bulan, tahun);

	printf("\n===================================================================================\n");
	printf("Minggu Senin  Selasa  Rabu  Kamis  Jumat  Sabtu");
	printf("\n===================================================================================\n");

	int kosong = 0;
	for (int i = 0; i < Day; i++) {
		printf("\t");
		kosong++;
	}
	
	for (int i = 1; i <= jumlah_hari; i++) {
		printf("%d", i);
		switch (jml_hari % 5)
		{
			//printf("\n");
		case 1:
			printf("PAHING ");
			break;
		case 2:
			printf("PON ");
			break;
		case 3:
			printf("WAGE ");
			break;
		case 4:
			printf("KLIWON ");
			break;
		case 0:
			printf("LEGI ");
			break;
		default:
			printf("ERROR");
			break;
		}
	
		jml_hari++;
		if (Day % 7 == 6){	
			printf("\n");
		}
		Day++;
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
	
	_getch();
	system("pause");
}
