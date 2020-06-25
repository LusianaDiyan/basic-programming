#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main() {

	//array
	/*
	int A[1][4] = { 10, 20, 30, 40 };
	printf("[%d %d %d %d]", A[0][0], A[0][1], A[0][2], A[0][3]);

	int D[2][4] = { 20,40,90,20,30,60,74,35 };
	printf("[%d %d %d %d\n %d %d %d %d]", D[0][0],D[0][1],D[0][2],D[0][3],D[1][0],D[1][1],D[1][2],D[1][3]);
	*/

	/*
	int b,c;
	int d[2][4] = { 20, 40, 90, 20, 30, 60, 75, 35 };
	for (b = 0; b<=1; b++)
	{
		printf("[");
		for (c = 0; c <= 3; c++)
		{
			printf(" %d ", d[b][c]);
		}
		printf("]\n");
	}
	*/

	//1.
	/*
	int a, b;
	printf("Masukkan tahun = ");
	scanf_s("%d", &a);

	b = a % 4;
	int c = a % 100;
	int d = a % 400;
	if (b==0 && c!=0 && d==0)
	{
		printf("Tahun Kabisat\n");
	}
	else
	{
		printf("Bukan tahun kabisat\n");
	}
	*/

	/*
	int x;
	printf("enter number  = ");
	scanf_s("%d", &x);

	if (x%4==0)
	{
		if(x%100 == 0)
		{
			if (x%400==0)
			{
				printf("Kabisat\n");
			}
			else
			{
				printf("Bukan kabisat\n");
			}
		}
		else
		{
			printf("Bukan kabisat\n");
		}
	}
	*/

	//2.
	/*
int i, bil, jum;
printf("Masukkan bilangan = ");
scanf_s("%d", &bil);
jum = 0;
for (i = 1; i <= bil; i++)
if (bil%i == 0)
jum++;
if (jum == 2)
printf("Bilangan tersebut adalah bilangan prima\n");
else
printf("Bilangan tersebut bukan bilangan prima\n");
*/

	//3.
	/*
	int a, c, b=1;
	printf("Masukkan bilangan = ");
	scanf_s("%d", &a);

	for (int i = 1; i <= a; i+=2)
	{
		b = b + i;
		c = b - 1;
	}
	printf("%d ", c);
	*/
	//4.
	/*
	int a, b, c=1;
	printf("Masukkan bilangan = ");
	scanf_s("%d", &a);

	for (b=a; b >= 1; b--)
	{
		c = c * b;
	}
	printf("%d\n", c);
	*/
	//5.
	
/*
	int a=1, b=1, c, jumlah;
	printf("Masukkan banyak bilangan fibonaci = ");
	scanf_s("%d", &jumlah);

	for (int i = 0; i <= jumlah ; i++)
	{
		if (i ==0)
		{
			c = a;
			printf("%d ", c);
		}
		else if (i == 1)
		{
			c = b;
			printf("%d ", c);
		}
		else if (i>1)
		{
			c = b + a;
			a = b;
			b = c;
			printf("%d ", c);
		}
	}
	printf("\n");
	*/

int a[10] = {};
int i, j, k;
for ( i = 0; i < 10; i++)
{
	printf("Input bilangan ke-%d = ", i + 1);
	scanf_s("%d", &a);
}

int total = 0;
for ( j = a[i]; j <=12 ; j++)
{
	total += 1;
}

printf("Jumlah bilangan yang kurang dari 13 = %d", total);
	system("pause");
}