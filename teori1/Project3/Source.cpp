#include <stdio.h>
//#include "stdio.h"
#include <math.h>
#include<stdlib.h>
#define MAKS 8

int main()
{
	/*printf("No    : %d\n", 10);
	printf("Nama  : %s\n", "Lusi");
	printf("Nilai : %.1f\n", 80.5);
	printf("Huruf : %c\n", 'A');
	*/

	//int a, b, c, sum, d;

	//1.
	//printf("The black dog was big. ");
	//printf("The cow jumped over the moon.\n");

	//2.
	/*
	a = 1;
	b = 2;
	c = a + b;
	printf("Sum :%d\n", c);

	printf("SUM :%d\n", 1);
	*/

	//3.
	//printf("Welcome\n");

	//4.
	//printf("Letter :%c\n", 'L');

	//5.
	//printf("Discount :%.1f\n", 40.5);

	//7.
	/*d = 6 % 3;
	printf("datanya = %d\n", a);
	*/
	//.lat
	/*
	int count = 0, loop;
	loop = ++count;
	printf("loop = %d, count = %d\n ", loop, count);

	loop = count++;
	printf("looop = %d, count = %d\n", loop, count);
	*/

	//lat2
	
	/*
	float x = 2510000.0f;

	printf("Format e = %e\n", x);
	printf("Format f = %f\n", x);
	printf("Format g = %g\n", x);
	*/

	//6.
	//printf("Masukkan nama:");
	//scanf_s("Masukkan nama:");

	//tgl 25 september
	/*
	int sum;
	printf("Masukkan jumlah nilai Anda = ");
	scanf_s("%d", &sum);
	if (sum < 65)
	{
		printf("Maaf, Anda harus mencoba lagi");
	}
	
	
	int total, tebak;
	printf("Masukkan total = ");
	scanf_s("%d", &total);
	printf("Masukkan tebak = ");
	scanf_s("%d", &tebak);
	if (total == tebak)
	{
		printf("%d\n", total);
	}
	else
	{
		printf("%d\n", tebak);
	}
	
	int total, sum;
	printf("Input sum =");
	scanf_s("%d", &sum);
	printf("Input total =");
	scanf_s("%d", &total);
	if (sum == 10 && total < 20)
	{
		printf("Tidak sesuai!\n");
	}
	
	
	int flag, exit_flag;
	char letter;
	printf("Masukkan flag dan letter = ");
	scanf_s("%d %c", &flag, &letter);

	if (flag == 1 || letter != 'X')
	{
		printf("EXIT FLAG = 0\n");
	}
	else
	{
		printf("EXIT FLAG = 1\n");
	}
	
	
	char letter;
	int valid_flag, sum;
	printf("Masukkan nilai letter = ");
	scanf_s("%c", &letter);
	switch (letter)
	{
	case 'X':
		sum = 0;
		break;
	case 'Z':
		valid_flag = 1;
		break;
	case 'A':
		sum = 1;
		break;
	default:
		printf("Unknown letter %c\n", letter);
		break;
	}
	*/
	//getchar();

//tgl 26 september
		
		int i;
		for (i = 1; i <= 100; i++)
		{
			if (i % 2 != 0) printf("%d \n", i);
			else
			{
				printf("%d bilangan genap ", i);
			}
		}
		
		/*
		for (i = 1; i <= 100; i+=2)
		{
			printf("%d\n", i);
		}
		*/

/*
	char pilihan;
	int sudah_benar = 0;
	printf("Pilihlah Y atau T\n");

	while (!sudah_benar)
	{
		pilihan = getchar(); 
		sudah_benar = (pilihan == 'Y') || (pilihan == 'y') ||
			(pilihan == 'T') || (pilihan == 't');
	}

	switch (pilihan)
	{
	case 'Y':
	case 'y':
		puts("\nPilihan anda adalah Y");
		break;
	case 'T':
	case 't':
		puts("\nPilihan anda adalah T");
	}
	*/
		/*
		char kar;
		int jumkar = 0, jumspasi = 0;
		puts("Masukkan sebuah kalimat dan akhiri dgn ENTER.\n"); 
		puts("Saya akan menghitung jumlah karakter ");
		puts("pada kalimat tersebut.\n");
		while ((kar = getchar()) != '\n')
		{
				jumkar++;
			if (kar == ' ') jumspasi++;
		}
		printf("\nJumlah karakter = %d", jumkar);
		printf("\nJumlah SPASI = %d\n\n", jumspasi);
		*/

		/*
		int i;
		i = 0;
		do
		{
			puts("Bahasa C");
			i++;
		} while (i<10);
		*/
		/*
		char pilihan;
		int sudah_benar;
		printf("Pilihlah Y atau T \n");
		do
		{
			pilihan = getchar();
			sudah_benar = (pilihan == 'Y') || (pilihan = 'y') || (pilihan == 'T') || (pilihan = 't');
		} while (!sudah_benar);

		switch (pilihan)
		{
		case'Y':
		case'y':
			puts("\nPilihan anda adalah Y");
			break;
		case'T':
		case't':
			puts("\nPilihan anda adalah t");
		}
		*/

		/*
		int x;
		for (x = 1; x <= 100; x++)
		{
			if (x >= 20 && x <= 30)
				continue;
			else if (x >=70 && x<= 80)
				continue;
			printf("%4d", x);
		}
		printf("\n");
		*/
/*
int baris, kolom, hasil_kali;
for (baris = 1; baris <= MAKS; baris++)
{
	for (kolom = 1; kolom <= MAKS; kolom++)
	{
		hasil_kali = baris * kolom;
		printf("%5d", hasil_kali);
	}
	printf("\n");
}
*/
	system("pause");
	return 0;
}

