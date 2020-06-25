#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

//float jumlah(float, float);
/*
int z;
void jumlah(int x, int y) {
	z = x + y;
	//printf("%d", z);
}
void nama() {
	printf("Lusiana\n");
}
void cetak() {
	printf("%d\n", z);
	nama();
}
*/
int main() {
	/*
	for (int i = 1; i <= 6; i++)
	{
		for (int j = 1; j <= i ; j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	*/
	/*
	int i, bil, jml = 0, r;
	printf("Masukkan bilangan = ");
	scanf_s("%d", &bil);
	for (i = bil; i >= 0; i--)
	{
		jml += i;
		printf("%d+", i);
	}
	printf("= %d\n", jml);
	*/
	/*
	for (int i = 1; i < 6; i++)
	{
		for (int j = 6; j >= i; j--)
			printf(" ");
		{for (int k = 1; k <= i * 2 - 1; k++)
			printf("*");
		}
		printf("\n");
	}
	*/
	/*
	int a = 2, b = 3;
	jumlah(a, b);
	cetak();
	*/
	/*
	float a, b, c;
	printf("Masukkan nilai a : ");
	scanf_s("%f", &a);
	printf("Masukkan nilai b : ");
	scanf_s("%f", &b);
	c = jumlah(a, b);
	printf("\nHasil penjumlahan a+b = %g\n", c);
	*/
	/*
	int a, b, c;
	for (a = 0; a <= 5; a++)
	{
		for (b = 1; b <= a; b++)
			printf("%d", a);
		printf("\n");
	}
	*/
	/*
	char nilai1, nilai2, nilai3, nilai4, nilai5;
	int jam1, jam2, jam3, jam4, jam5;

	printf("Nilai Mata Kuliah 1 = ");
	scanf_s("%c", &nilai1);
	printf("Jumlah jam = ");
	scanf_s("%d", &jam1);

	printf("Nilai Mata Kuliah 2 = ");
	scanf_s("%c", &nilai2);
	printf("Jumlah jam = ");
	scanf_s("%d", &jam2);

	printf("Nilai Mata Kuliah 3 = ");
	scanf_s("%c", &nilai3);
	printf("Jumlah jam = ");
	scanf_s("%d", &jam3);

	printf("Nilai Mata Kuliah 4 = ");
	scanf_s("%c", &nilai4);
	printf("Jumlah jam = ");
	scanf_s("%d", &jam4);

	printf("Nilai Mata Kuliah 5 = ");
	scanf_s("%c", &nilai5);
	printf("Jumlah jam = ");
	scanf_s("%d", &jam5);

	int jam = jam1 + jam2 + jam3 + jam4 + jam5;
	int jumlah = (nilai1 * jam1) + (nilai2*jam2) + (nilai3*jam3) + (nilai4*jam4) + (nilai5*jam5);
	int ips = jumlah / jam;
	printf("Indeks Prestasi Semester = %d", ips);
	*/
	float nil, totnil, ips, totips = 0, totjam = 0, totsemua, jam;
	char nilaiHuruf;
	int n = 1;
	printf("PROGRAM PRESTASI INDEKS SEMENTARA \n ");
	while (n<=5)
	{
		for (n = 1; n <= 5 ; n++)
		{
			printf("masukan nilai huruf mata kuliah %d :\n", n);
			scanf_s("%c", &nilaiHuruf);
			printf("masukan jumlah jam mata kuliah :\n");
			scanf_s("%d", &jam);

			switch (nilaiHuruf)
			{
			case 'A':
			case 'a':
				nil = 4;
				break;
			case 'B':
			case 'b':
				nil = 3;
				break;
			case 'C':
			case 'c':
				nil = 2;
				break;
			case 'D':
			case 'd':
				nil = 1;
				break;
			case 'E':
			case 'e':
				nil = 0;
				break;
			default:
				printf("Tidak valid");
			}
			getchar();
			ips = nil * jam;
			totips = totips + ips;
			totjam = totjam + jam;	
		}
		getchar();
		totsemua = totips / totjam;
		n++;
	}
	printf("\n indeks prestasi sementara anda adalah %.2f", totsemua);
	getchar();
	system("pause");
}
/*
float jumlah(float x, float y) {
	return(x + y);
	system("pause");
}
*/