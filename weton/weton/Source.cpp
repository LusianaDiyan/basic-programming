#include "stdio.h"
#include "math.h"
#include "string.h"
#include "stdlib.h"

/*
int cektahun(int tahun) {
	int jmlhari;
	if (tahun % 400 == 0) {
		jmlhari = 366;
	}
	else if (tahun % 100 == 0) {
		jmlhari = 365;
	}
	else if (tahun % 4 == 0) {
		jmlhari = 366;
	}
	else
	{
		jmlhari = 365;
	}
	return jmlhari;
}

int cekbulan(int bulan, int tahun) {
	int bln[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	if (cektahun(tahun) == 366)
		bln[1] = 29;

	return bln[bulan - 1];
}

void cetakhari(int jumlahhari) {

	switch (jumlahhari % 7) {
	case 1:
		printf("SENIN");
		break;
	case 2:
		printf("SELASA");
		break;
	case 3:
		printf("RABU");
		break;
	case 4:
		printf("KAMIS");
		break;
	case 5:
		printf("JUM'AT");
		break;
	case 6:
		printf("SABTU");
		break;
	case 0:
		printf("MINGGU");
		break;
	default:
		printf("TIDAK ADA");
		break;
	}
}
void cetakharijawa(int jumlahhari)
{

	switch (jumlahhari % 5)
	{
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
		printf("KLIWON");
		break;
	case 0:
		printf("LEGI ");
		break;
	default:
		printf("ERROR ");
		break;
	}
}

void fungsicek()
{
	int i, thn = 0, bln = 0, tgl = 0, totalhr = 0, error = 0;
	char ask, batas[2];

	printf("Masukan tanggal lahir (dd-mm-yyyy) : ");
	scanf_s("%d%c%d%c%d", &tgl, &batas[0], &bln, &batas[1], &thn);
	//fflush(stdin);

	if (thn < 1900)
		error = 1;
	if (bln == 0 || bln > 12)
		error = 1;
	if (tgl == 0 || tgl > cekbulan(bln, thn))
		error = 1;
	if (batas[0] != '-')
		error = 1;
	if (batas[1] != '-')
		error = 1;

	if (error == 0)
	{
		getchar();
		for (i = 1900; i < thn; i++)
			totalhr += cektahun(i);


		for (i = 1; i < bln; i++)
			totalhr += cekbulan(i, thn);

		totalhr += tgl;

		printf("Tanggal %d-%d-%d jatuh pada hari ", tgl, bln, thn);
		cetakhari(totalhr);
		printf(" ");
		cetakharijawa(totalhr);
		printf("\n");
	}
	else
		printf("Hanya bisa cek tanggal setelah tahun 1899 atau \ntanggal tsb tidak ada atau format tanggal tidak sesuai\n\n");

	printf("ingin mengulang (Y/T) ? ");
	scanf_s("%c", &ask);
	if (ask == 'y' || ask == 'Y') {
		system("CLS");
		fungsicek();
	}
	else
		printf("Ya wis oke");

}

int main(int argc, char *argv[])
{
	fungsicek();

	return 0;
}
*/

int jmlhari(int, int, int);
void weton(int);
void hari(int);

int main() {
	int y = 1;
	int tanggal, bulan, tahun;
	while (y == 1) {
		printf("Masukkan tanggal(d m y): ");
		scanf_s("%d %d %d", &tanggal, &bulan, &tahun);
		int jumlah = jmlhari(tanggal, bulan, tahun);
		hari(jumlah);
		printf(" ");
		weton(jumlah);
		printf("\n");
	}
	
	system("pause");
}


int jumlahhari(int tanggal, int bulan, int tahun) {
	int jmlhari[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	
	if (tahun % 400 == 0 || (tahun % 4 == 0 && tahun % 100 != 0)) {
		if (jmlhari > 59) jmlhari += 1;
	}
	for (int i = 1; i < tahun; i++) {
		if (i % 400 == 0 || (i % 4 == 0 && i % 100 != 0)) {
			jmlhari += 366;
			continue;
		}
		jmlhari += 365;
	}
	return jmlhari;
}


void weton(int jumlah) {
	/*
	switch (jumlah % 5) {
	case 0:
		printf("LEGI");
		break;
	case 1:
		printf("PAHING");
		break;
	case 2:
		printf("PON");
		break;
	case 3:
		printf("WAGE");
		break;
	case 4:
		printf("KLIWON");
		break;
	}
	*/
	int weton[4] = { 'LEGI','PAHING','PON', 'WAGE', 'KLIWON' };
}

void hari(int jumlah) {
	/*
	switch (jumlah % 7) {
	case 0:
		printf("MINGGU");
		break;
	case 1:
		printf("SENIN");
		break;
	case 2:
		printf("SELASA");
		break;
	case 3:
		printf("RABU");
		break;
	case 4:
		printf("KAMIS");
		break;
	case 5:
		printf("JUMAT");
		break;
	case 6:
		printf("SABTU");
		break;
	}
	*/
	char hari[7] = { 'MINGGU', 'SENIN', 'SELASA', 'RABU', 'KAMIS', 'JUMAT', 'SABTU' };
}