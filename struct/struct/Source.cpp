#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#pragma warning(disable:4996)

/*
struct date
{
	int month;
	int day;
	int year;
};

struct person
{
	char name[30];
	struct date birthday;
};

struct person student;
int main() {
	strcpy_s(student.name, "LUSIANA DIYAN");
	student.birthday.day = 10;
	student.birthday.month = 8;
	student.birthday.year = 1970;

	printf("Name            : %s\n", student.name);
	printf("Birthday        : %d-%d-%d\n", student.birthday.day, student.birthday.month, student.birthday.year);

	system("pause");
}
*/

/*
int main() {
	struct zodiak
	{
		char nama[11];
		int tgl_awal;
		int bln_awal;
		int tgl_akhir;
		int bln_akhir;
	};

	static struct zodiak bintang =
	{
		"Sagitarius", 22, 11, 21, 12
	};
	int tgl_lahir, bln_lahir, thn_lahir;

	printf("Masukkan tgl lahir anda (XX-XX-XXXX) : ");
	scanf_s("%d-%d-%d", &tgl_lahir, &bln_lahir, &thn_lahir);

	if ((tgl_lahir >= bintang.tgl_awal && bln_lahir == bintang.bln_awal)|| (tgl_lahir <= bintang.tgl_akhir && bln_lahir == bintang.bln_akhir))
	{
		printf("Bintang Anda adalah %s\n", bintang.nama);
	}
	else
	{
		printf("Bintang Anda bukan %s\n", bintang.nama);
	}

	system("pause");
}
*/

/*
int main() {
	FILE *pdf;
	char kar;


	if ((pdf = fopen("COBA.TXT","w")) == NULL)
	{
		printf("file tidak dapat diciptakan\r\n");
		exit(1);
	}

	printf("Ketikkan  apa saja, akhiri dengan enter\n");
	printf("Program akan membacar per karakter");
	printf("dan menyimpannya dalam file COBA.TXT");

	while ((kar =getchar()) != '\n')
	{
		fputc(kar, pdf);
	}
	fclose(pdf);
	*/

	/*
	if ((pdf = fopen("COBA.TXT", "r")) == NULL)
	{
		printf("file tidak dapat dibuka\r\n");
		exit(1);
	}

	while ((kar =fgetc(pdf)) != EOF)
	{
		putchar(kar);
	}
	printf("\n");
	fclose(pdf);
	*/

	/*
		FILE *pf;
		int nilai, sudah_benar;
		char jawab;

		if ((pf = fopen("BILANGAN.txt", "wb")) == NULL)
		{
			printf("file gagal diciptakan\n");
			exit(1);
		}
		printf("MENYIMPAN DATA INTEGER KE FILE \n");

		do
		{
			printf("\nBilangan yang akan disimpan : ");
			scanf_s("%d", &nilai);
			_putw(nilai, pf);
			printf("memasukkan data lagi (Y/T) ?");
			do
			{
				jawab = getchar();
				sudah_benar = ((jawab == 'Y') || (jawab == 'y') || (jawab == 'T') || (jawab == 't'));
			} while (! sudah_benar);
		} while (jawab == 'y'||jawab=='Y');

		printf("\nOKE. Data sudah disimpan dalam file.\n");
		fclose(pf);
}
*/

int main() {
	FILE *pf;
	int nilai, nomor = 0;

	if ((pf=fopen("BILANGAN.DAT", "rb"))==NULL)
	{
		printf("FILE GAGAL DIBUKA\n");
		exit(1);
	}
	printf("Isi file BILANGAN.DAT : \n");

	while (1)
	{
		nilai = _getw(pf);
		if (feof(pf) != 0)
			break;

		printf("%2d. %d\n", ++nomor, nilai);
	}
	fclose(pf);
}