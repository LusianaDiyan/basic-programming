#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	/*
	int x, y;
	printf("Input x = ");
	scanf_s("%d", &x);

	y = x % 2;
	switch (y)
	{
	case 0 :
		printf("Bilangan Genap\n");
		break;

	default:
		printf("Bilangan Ganjil\n");
		break;
	}
	*/
	/*
	char x;
	printf("Input huruf = ");
	scanf_s("%c", &x);

	switch (x)
	{
	case 'a':
		printf("Huruf Vokal\n");
		break;
	case 'i':
		printf("Huruf Vokal\n");
		break;
	case 'u':
		printf("Huruf Vokal\n");
		break;
	case 'e':
		printf("Huruf Vokal\n");
		break;
	case 'o':
		printf("Huruf Vokal\n");
		break;
	default:
		printf("Huruf Konsonan\n");
		break;
	}
	*/
	/*
	int a;
	printf("Input bilangan = ");
	scanf_s("%d", &a);

	switch (a)
	{
	case 1 :
		printf("Minggu");
		break;
	case 2:
		printf("Senin");
		break;
	case 3:
		printf("Selasa");
		break;
	case 4:
		printf("Rabu");
		break;
	case 5:
		printf("Kamis");
		break;
	case 6:
		printf("Jumat");
		break;
	case 7:
		printf("Sabtu");
		break;
	default:
		printf("Hari Tidak Valid");
		break;
	}
	*/
	/*
	int valid_operator = 1;
	char operator1;
	float number1, number2, result;
	
	printf("Masukkan 2 buah bilangan & sebuah operator\n");
	printf("dengan format : number1 operator number2\n\n");
	scanf_s("%f %c %f", &number1, &operator1, &number2);

	switch (operator1)
	{
	case '*':
		result = number1 * number2;
		printf("%d", result);
		break;
	default:
		break;
	}
	*/

	//char i;
	//2
	/*
	int i, bil, jml=0, r;
	printf("Masukkan bilangan = ");
	scanf_s("%d", &bil);
	
	for (i = bil; i >= 0; i--)
	{
		jml += i;
		printf("%d+", i);
	}
	printf("= %d\n\n", jml);
	*/
	//1
/*
int i, bil;
printf("Input bilangan = ");
scanf_s("%d", &bil);
	for (i = 1; i <= bil; bil++)
	{
		printf("%d ", i);
		i += 2;
	}
	*/
	//3
	/*
char i;
	for (i = 'Z'; i >= 'A'; i--)
	{
		printf("%c\n", i);
	}
*/
//4
/*
int i, bil;
printf("Masukkan bilangan = ");
scanf_s("%d", &bil);
	for (i = 1; i <= bil ; i++)
	{
		if (i % 2 == 0)
		{
			printf("-%d ", i);
		}
		else
		{
			printf("%d ", i);
		}
	}
*/
// 5
/*
int prima, i = 2, cek = 0;
printf("Masukkan bilangan : ");
scanf_s("%d", &prima);
for (; i < prima; i++)
{
	if (prima%2 == 0)
	{
		cek = 1;
		break;
	}
	else
	{
		cek = 0;
	}
	if (cek ==1 || prima ==1) 
	{
		printf("Bilangan tersebut bukan bilangan prima\n");
	}
	else
	{
		printf("Bilangan tersebut adalah bilangan prima\n");
	}
}
*/
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

int a = 0, b = 1, c, jumlah;
printf("Masukkan banyak bilangan fibonaci= ");
scanf_s("%d", &jumlah);
for (int i = 0; i < jumlah; i++)
{
	if (i == 0) {
		c = a;
		printf("%d ", c);
	}
	else if (i==1)
	{
		c = b;
		printf("%d ", c);
	}
	else if (c>1)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%d ", c);
	}
}
printf("\n");

/*
int a, b, c = 1;
printf("Masukkan angka = ");
scanf_s("%d", &a);
for (b = a; b>=1; b--)
{
	c = c * b;
}
printf("Faktorialnya adalah %d \n", c);
*/
	system("pause");
}