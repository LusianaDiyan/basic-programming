#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>
using namespace std;

//int main() {
	//1.
	/*
	char kata[25];
	printf("Input kata = ");
	gets_s(kata);
	printf("Panjang string = %d \n", strlen(kata));
	*/

	//2.
	/*
	int bts,jml_kar=0;
	char kar[25];
	char copy[4];
	printf("Input kata = ");
	gets_s(kar);
	bts = strlen(kar);
	for (int i = 0; i <= 3; i++)
	{
		printf("%c", kar[i]);
	}
	for (int j = 0; j <= bts; j++)
	{
		jml_kar++;
	}
	if (jml_kar>4)
	{
		printf(" ; Panjang string = 4\n");
	}
	else
	{
		printf("Output = %d ", strcpy_s(copy, kar));
	}
	*/
	

	//3
	/*
	char first[20];
	char second[20];
	//char gabung, balik;
	printf("Input kata pertama = ");
	gets_s(first);
	printf("Input kata kedua = ");
	gets_s(second);
	strcat_s(first, second);
	printf("result = %s", first);
	printf(" \nconvert = ");
	for (int i = 0; i <= strlen(first) ; i++)
	{
		printf("%c\n", first[strlen(first) - i]);
	}
	*/
	

	//4
	/* masih salah
	int A[5], b;
	for (int i = 0; i < 6; i++)
	{
		cout << "Masukkan angka ke - " << i + 1 << " : ";
		cin >> A[i];
	}
	for (int i = 0; i < 6; i++)
	{
		if (A[i] > A[i + 1]) {
			b = A[i];
			A[i + 1] = b;
		}
		else
		{
			b = A[i + 1];
		}
		cout << b << endl;
	}
	*/

	//5.
	/*
	char input[20], kar1[20], kar2[20];
	char huruf;
	char *p1;
	char *p2;
	char *p3;
	printf("Word : ");
	gets_s(input);
	printf("A : ");
	gets_s(kar1);
	printf("B : ");
	gets_s(kar2);
	printf("Huruf Vokal : ");
	huruf = getchar();
	p1 = strchr(input, huruf);
	p2 = strchr(kar1, huruf);
	p3 = strchr(kar2, huruf);
	if (p1 = p2) {
		printf("Kata dengan jumlah huruf vokal yang sama adalah %s \n", kar1);
	}
	else if (p1 = p3) {
		printf("Kata dengan jumlah huruf vokal yang sama adalah %s \n", kar2);
	}
	*/

//	system("pause");
//}

int jumhar[13] = { 31, 28, 31, 30, 31, 30, 31, 31, 30 , 31, 30, 31 };
int jumharkabisat[13] = { 31, 29, 31, 30, 31, 30, 31, 31, 30 , 31, 30, 31 };
struct date
{
	int hari, bulan, tahun;
}today, tommorow;

void kabisat(int day, int month, int year)
{
	if (today.hari < jumharkabisat[today.bulan - 1])
	{
		tommorow.hari = 1 + today.hari;
		tommorow.bulan = today.bulan;
		tommorow.tahun = today.tahun;
	}
	if (today.hari == jumharkabisat[today.bulan - 1])
	{
		tommorow.hari = 1;
		tommorow.bulan = today.bulan + 1;
		tommorow.tahun = today.tahun;
	}
	if (today.bulan == 12 && today.hari == jumharkabisat[today.bulan - 1])
	{
		tommorow.hari = 1;
		tommorow.bulan = 1;
		tommorow.tahun = today.tahun + 1;
	}
	if (today.hari > jumharkabisat[today.bulan - 1] || today.bulan > 12)
		printf("Masukkan anda salah\n");
	else
		printf("%d %d %d", tommorow.hari, tommorow.bulan, tommorow.tahun);

	system("pause");

}