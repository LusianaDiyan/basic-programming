#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
#include<conio.h>
using namespace std;

/*
int main() {
	
	struct mahasiswa
	{
		char nrp, kelas;
	}bilit, shotta;

	bilit.kelas = 'TKB';
	bilit.nrp = '001';

	printf("%c %c", bilit.kelas, bilit.nrp);
	*/

//2.
/*
#define MAKS 20
int daftarHari[13] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
struct date
{
	int day, month, year;
};

int carijmlhari(int month, int year);

int main(){
	struct date today, tomorrow;
	int jmlhari = 30;

		printf("PROGRAM PENCARI TANGGAL BESOK\n");
		printf("Masukkan tanggal hari ini (dd mm yyyy) = ");
		scanf_s("%d %d %d", &today.day, &today.month, &today.year);
		if (today.day + 1 > carijmlhari(today.month, today.year))
		{
			if (today.month == 12)
			{
				tomorrow.day = 1;
				tomorrow.month = 1;
				tomorrow.year = today.year + 1;
			}
			else
			{
				tomorrow.day = 1;
				tomorrow.month = today.month + 1;
				tomorrow.year = today.year;
			}
		}
		else
		{
			tomorrow.day = today.day + 1;
			tomorrow.month = today.month;
			tomorrow.year = today.year;
		}

			printf("\nTanggal besok adalah \t\t\t= %2d %2d %2d \n", tomorrow.day, tomorrow.month, tomorrow.year);

		system("pause");
}

int carijmlhari(int month, int year) {
	int totHari;
		totHari = daftarHari[month - 1];
	if (month == 2 && year % 4 == 0)
	{
		if (year % 100 != 0 || year % 400 == 0)
		{
			totHari = 29;
		}
		return totHari;
	}
};
*/

//3.

// masih ada bug
/*
struct dataMenu
{
	char kode;
	int jumlah;
};

int main() {
	struct dataMenu keranjang[30];
	int i = 1, j, harga, total = 0;
	char verif, jenis[6];

	printf("Toko GFC - Gerobak Fried Chicken\n");
	printf("\nDAFTAR HARGA");
	printf("\n Kode Jenis     Harga Per Potong");
	printf("\nD      Dada     Rp. 5000.00");
	printf("\nP      Paha     Rp. 4000.00");
	printf("\nS      Sayap    Rp. 3000.00");
	printf("\n\nHarga Belum Termasuk Pajak = 10 %%");
	printf("\n\n Masukkan pesanan Anda");

	do
	{
		printf("\nPesanan ke-%d", i);
		printf("\nJenis [D/P/S] \t= ");
		scanf_s("%c", &keranjang[i].kode);
		printf("Jumlah \t\t = ");
		scanf_s("%d", &keranjang[i].jumlah);
		i++;
		printf("\nPesan lagi[Y/N] ? ");
		verif = getchar();
	} while (verif == 'Y');
		
	printf("\n\nNota Belanja Anda  \n");
	printf("\n                            GEROBAK FRIED CHICKEN  \n");
	printf("\nNo\t  Jenis Potong\t  Harga Satuan\t   Qty\t   Jumlah Harga");
	printf("\n===================================================================");

	for ( j = 0; j < i; j++)
	{
		switch (keranjang[j].kode) {
		case 'D' : case 'd' :
			strcpy_s(jenis, "DADA");
			harga = 5000;
			break;

		case 'P' : case 'p' :
			strcpy_s(jenis, "PAHA");
			harga = 4000;
			break;

		case 'S' : case 's' :
			strcpy_s(jenis, "SAYAP");
			harga = 3000;
			break;
		}
		printf("\n%d\t%s\t\t Rp.    %.2d\t%d\tRp.    %6.2d", j+1, jenis, harga, keranjang[j].jumlah, harga*keranjang[j].jumlah);
		total = total + harga * keranjang[j].jumlah;
	}
	printf("\n====================================================================");
	printf("\n                            Jumlah bayar\t       Rp. %6.2d", total);
	printf("\n                            Pajak 10%%\t\t       Rp. %6.2d", total / 10);
	printf("\n                            Total bayar\t        Rp. %6.2d", total + total/10);
	printf("\n\n          TERIMA KASIH ATAS KUNJUNGANNYA                \n");

	system("pause");
}
*/


//3.
/*
#define MAKS 100
struct pesanan {
	int d, p, s;
} qty;

int main() {
	int i = 0, jumlah[MAKS];
	char pil = 'y', kode[MAKS];
	puts("Toko GFC-Gerobak Fried Chicken");
	puts("\nDAFTAR HARGA");
	puts("Kode\tJenis\tHarga Per Potong");
	puts("D\tDada\tRp. 5000.00");
	puts("P\tPaha\tRp. 4000.00");
	puts("S\tSayap\tRp. 3000.00");
	puts("\nHarga belum termasuk pajak : %10");
	puts("\nMasukkan Pesanan Anda :");
	while (pil == 'y') {
		printf("\nPesanan ke-%d ", i + 1);
		printf("\nJenis D/P/S \t: ");
		scanf_s(" %c", &kode[i]);
		printf("Jumlah          : ");
		scanf_s(" %d", &jumlah[i]);
		printf("Ada lagi? (y/t) ");
		scanf_s(" %c", &pil);
		if (kode[i] == 'D') {
			qty.d += jumlah[i];
		}
		else if (kode[i] == 'P') {
			qty.p += jumlah[i];
		}
		else if (kode[i] == 'S') {
			qty.s += jumlah[i];
		}
		i++;
	}
	int td = qty.d * 5000, tp = qty.p * 4000, ts = qty.s * 3000, total = td + tp + ts;
	puts("Nota Belanja Anda :\n");
	puts("\t\t    Gerobak Fried Chicken\n");
	puts("============================================================");
	puts("No\tJenis Potong\tHarga Satuan\tQty\tJumlah Harga");
	puts("============================================================");
	printf("1\tDADA \t\tRp. 5000.00\t%d\tRp. %d\n", qty.d, td);
	printf("2\tPAHA \t\tRp. 4000.00\t%d\tRp. %d\n", qty.p, tp);
	printf("3\tSAYAP \t\tRp. 3000.00\t%d\tRp. %d\n", qty.s, ts);
	puts("============================================================");
	printf("\t\t\t\tJumlah  \tRp. %d\n", total);
	printf("\t\t\t\tPajak 10  \tRp. %d\n", 10 * total / 100);
	printf("\t\t\t\tTotal bayar  \tRp. %d\n", total + (10 * total / 100));
	system("pause");
}
*/

//===========STRUCT 2============
//1.
/*

int jumSiswa;
struct Nilai
{
	char nama;
	int nrp, nilaiTugas, nilaiUts, nilaiUas;
};

void input(struct Nilai data[]) {

	printf("\nBerapa jumlah mahasiswa ?");
	scanf_s("%d", &jumSiswa);
	printf("\nMasukkan data mahasiswa");
	printf("\n=========================================");
	
	
	for (i = 0; i < jumSiswa; i++)
	{
		printf("\nData ke-%d ", i + 1);
		printf("\nNama\t\t = ");
		scanf_s(" %c", &data[i].nama);
		printf("\nNilai Tugas\t = ");
		scanf_s("%d", &data[i].nilaiTugas);
		printf("\nNilai UTS\t = ");
		scanf_s("%d", &data[i].nilaiUts);
		printf("\nNilai UAS\t = ");
		scanf_s("%d", &data[i].nilaiUas);
	}
}

void tampil(struct Nilai data[]) {
	float akhir;
	char grade;

	printf("\n\t\t\t DFATAR NILAI");
	printf("\n\t\t\t MATA KULIAH KONSEP PEMROGRAMAN");
	printf("\n=============================================================");
	printf("\nNo \tNama Mahasiswa \tTugas \tUTS \tUAS \tAkhir \tGrade");
	printf("\n=============================================================");
	for (int j = 0; j < jumSiswa; j++)
	{
		akhir = (0.2 * data[j].nilaiTugas) + (0.4 * data[j].nilaiUts) + (0.4 * data[j].nilaiUas);
		if (akhir >= 80)
		{
			grade = 'A';
		}
		else if (akhir >= 70)
		{
			grade = 'B';
		}
		else if (akhir >= 60)
		{
			grade = 'C';
		}
		else if (akhir >= 50)
		{
			grade = 'D';
		}
		else
		{
			grade = 'E';
		}
		printf("\n%d \t%s \t\t%.0f \t%.0f \t%.0f \t%.0f \t%c", j + 1, data[j].nama, data[j].nilaiTugas, data[j].nilaiUts, data[j].nilaiUas, akhir, grade);
	}
	printf("\n==============================================================");
	printf("\n\nTotal Mahasiswa = %d", jumSiswa);
}

int main() {
	struct Nilai mahasiswa[30];
	printf("\n MENGHITUNG NILAI AKHIR");
	printf("\n MATA KULIAH KONSEP PEMROGRAMAN");
	printf("\n=============================================================");

	input(mahasiswa);
	//tampil(mahasiswa);
}

*/

/*
int jumsiswa;
struct nilai
{
	char nama[99];
	float tugas, uts, uas;

};
void input(struct nilai data[]);
void tampil(struct nilai data[]);

int main() {
	struct nilai mahasiswa[30];
	printf("menghitung nilai mahasiswa \n");
	printf("\n=======================================\n");
	input(mahasiswa);
	tampil(mahasiswa);
	system("pause");
}

void input(struct nilai data[]) {
	int i;
	fflush(stdin);
	printf("\nBerapa Jumlah Mahasiswa?\n");
	scanf_s("%d", &jumsiswa);
	printf("masukkan data siswa");
	printf("\n==========================\n");
	for (i = 0; i < jumsiswa; i++) {
		printf("data ke %d\n", i + 1);
		//fflush(stdin);
		printf("Nama\t\t: ");
		//gets_s(data[i].nama);
		cin >> data[i].nama;
		//scanf_s("%c", &data[i].nama);
		//fflush(stdin);
		printf("\nNilai tugas\t:");
		scanf_s("%f", &data[i].tugas);
		//fflush(stdin);
		printf("Nilai UTS \t:");
		scanf_s("%f", &data[i].uts);
		//fflush(stdin);
		printf("Nilai UAS \t:");
		scanf_s("%f", &data[i].uas);

	}

}

void tampil(struct nilai data[]) {
	int i, j;
	float akhir;
	char grade;
	printf("\n\t\t DAFTAR NILAI \n");
	printf("\n PEMROGRAMAN DASAR 1");
	printf("\n==========================\n");
	printf("\nNo\t Nama \t Tugas\t UTS\tUAS\tAkhir\t GRADE ");
	printf("\n=======================================================\n");
	for (j = 0; j < jumsiswa; j++) {
		akhir = (0.2*data[j].tugas) + (0.4*data[j].uas) + (0.4*data[j].uts);
		if (akhir >= 80)
			grade = 'A';
		else if (akhir >= 70)
			grade = 'B';
		else if (akhir >= 60)
			grade = 'C';
		else if (akhir >= 50)
			grade = 'D';
		else
			grade = 'E';
		//puts(j + 1, data[j].nama, data[j].nilaitugas, data[j].nilaiuts, data[j].nilaiuas, akhir, grade);
		//cout  << j + 1, data[j].nama, data[j].nilaitugas, data[j].nilaiuts, data[j].nilaiuas, akhir, grade;
		printf("\n %d\t%s\t%.0f\t\t%.0f\t\t%.0f\t\t%.0f\t%c ", j + 1, data[j].nama, data[j].tugas, data[j].uts, data[j].uas, akhir, grade);

		printf("\n=======================================================\n");
		printf("\n TOTAL MAHASISWA= %d\n", jumsiswa);
	}

}
*/

//2
/*
struct databarang
	{
		char kode;
		int jumlah;
	};

int n = 0;

void input(struct databarang data[]);
void tampil(struct databarang data[]);

int main() {
	struct databarang keranjang[30];

	printf("\t TOKO LARIS");
	printf("\n\tDaftar Harga");
	printf("\n====================================================");
	printf("\nUkuran\tNama\tHarga Per Potong");
	printf("\n====================================================");
	printf("\nS\tSMALL\tRp. 36.000,-");
	printf("\nM\tMEDIUM\tRp. 43.000,-");
	printf("\nL\tLARGE\tRp. 62.0000,-");
	printf("\n====================================================");
	printf("\n\nDapatkan diskon 20%% untuk pembelian lebih dari 10 potong!");
	printf("\nJangan lupa, pajaknya ya.....10 %% x (harga - diskon)");

	input(keranjang);
	tampil(keranjang);
}

void input(struct databarang data[]) {
	char jawab='y';
	printf("\n======================================================");
	printf("\nMasukkan pesanan Anda");
	
	while (jawab == 'Y' || jawab == 'y')
	{
		printf("\n\nPesanan ke-%d", n + 1);
		printf("\nUkuran S/M/L");
		scanf_s(" %c", &data[n].kode);
		printf("Jumlah \t\t = ");
		scanf_s("%d", &data[n].jumlah);
		n++;
		printf("Beli lagi [y/n] ? ");
		jawab = getchar();
	}
}

void tampil(struct databarang data[]) {
	int harga, total = 0, diskon;
	char jenis[7];

	printf("\n======================================================");
	printf("\nNota Belanja Anda :\n");
	printf("\n\t\t\t TOKO LARIS");
	printf("\n======================================================");
	printf("\nNo\tNama Ukuran\tHarga Satuan\tQty\tDiskon\t\tJumlah Harga");
	printf("\n======================================================");

	for (int i = 0; i < n; i++)
	{
		switch (data[i].kode) {
		case 'S' : case 's' :
			strcpy_s(jenis, "SMALL");
			harga = 36000;
			break;
		case 'M' : case 'm' :
			strcpy_s(jenis, "MEDIUM");
			break;
		case 'L' : case 'l' :
			strcpy_s(jenis, "LARGE");
			break;
		}

		if (data[i].jumlah > 10)
		{
			diskon = harga * data[i].jumlah * 0.1;
		}
		else
		{
			diskon = 0;
		}
		printf("\n%d\t%s\t\tRp. %d\t%d\tRp. %5d\tRp. %8d", i+1, jenis, harga, data[i].jumlah, diskon, harga * data[i].jumlah - diskon);
		total = total + harga * data[i].jumlah - diskon;
	}
	printf("\n======================================================");
	printf("\n\t\t\t\t\t\tJumlah bayar\tRp. %8d", total);
	printf("\n\t\t\t\t\t\tPajak 10%%\tRp. %d", total / 10);
	printf("\n\t\t\t\t\t\tTotal bayar\tRp. %8d", total + total / 10);
	printf("\n\n TERIMAKASIH ATAS KUNJUNGAN ANDA");
}
*/

struct databarang
{
	char kode;
	int jumlah;

};

int n = 0;
void input(struct databarang data[]);
void tampil(struct databarang data[]);

int main() {
	struct databarang keranjang[30];
	printf("TOKO LARIS \n");
	printf("\n\t Daftra harga\n");
	printf("\n===============================================================\n");
	printf("\n Ukuran \t Nama \t Harga per potong");
	printf("\n===============================================================\n");
	printf("\nS\t SMALL\t Harga Rp 36.000,-\n");
	printf("\nM\t MEDIUM\t Harga Rp 43.000,-\n");
	printf("\nL\t LARGE\t Harga Rp 62.000,-\n");
	printf("\n\n Dapatkan Diskon Pembelian 20%% untuk pembelian lebih dari 10 potong! \n");
	printf("jangan lupa pajaknya 10%% ya.. 10%%x(harga-diskon) ");
	input(keranjang);
	tampil(keranjang);
	system("pause");
}

void input(struct databarang data[]) {
	char jwb;
	printf("\n\n=============================================");
	printf("\n Masukkan pesanan Anda: \n");
	do {
		printf("Pesanan ke %d", n + 1);
		//fflush(stdin);
		printf("\n\nUkuran [S/M/L]\t:");
		scanf_s("%c", &data[n].kode);
		fflush(stdin);
		printf("\nJumlah\t\t:");
		scanf_s("%d", &data[n].jumlah);
		//fflush(stdin);
		n++;
		fflush(stdin);
		printf("\n beli lagi[y/n]?");
		//puts(jwb);
		//gets_s(jwb);
		//scanf_s("%c", &jwb);
		//fflush(stdin);
		cin >> jwb;
		cout << endl;
	} while (jwb == 'Y' || jwb == 'y');

}

void tampil(struct databarang data[]) {
	int j = 0, harga, total = 0, diskon;
	char jenis[7];
	printf("\n\n===========================================================\n\n");
	printf("\n\n Nota Beanja Anda:\n");
	printf("\n\t\t Toko Laris\n");
	printf("\n===============================================================\n");
	printf("\n NO\t nama Ukuran\t\t Harga Satuan \tQty\tDiskon\t\t Jumlah harga");
	printf("\n===============================================================\n");
	for (j = 0; j < n; j++) {

		switch (data[j].kode) {
		case 'S':case 's':
			strcpy_s(jenis, "SMALL");
			harga = 36.000;

			break;
		case 'M':case 'm':
			strcpy_s(jenis, "MEDIUM");
			harga = 42.000;

			break;
		case 'L':case 'l':
			strcpy_s(jenis, "LARGE");
			harga = 64.000;

			break;
		}

		if (data[j].jumlah > 10) {
			diskon = harga * data[j].jumlah*0.1;
		}
		else

			diskon = 0;

		printf("\n%d\t%s\t\t Rp. %5d\t %8d", j + 1, jenis, harga, data[j].jumlah, diskon, harga*data[j].jumlah - diskon);
		total = total + harga * data[j].jumlah - diskon;

	}
	printf("\n\n========================================================================\n\n");
	printf("\t\t Jumlah Bayar\t Rp.	%8d\n", total);
	printf("\t\t Pajak 10%%\t Rp.	%8d\n", total / 10);
	printf("\t\t Total Bayarr\t Rp.	%8d\n", total + total / 10);
	printf("\n\n\t TERIMA KASIH ATAS KUNJUNGAN ANDA\n");
}