#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<iostream>

/*
int penjumlahan(int x, int y) {
	return x + y;
}
int pengurangan(int x, int y) {
	return x - y;
}
int perkalian(int x, int y) {
	return x * y;
}
int pembagian(int x, int y) {
	return x / y;
}
int modulus(int x, int y) {
	return x % y;
}
*/

void operasibilangan() {
	int a, b;
	char c;

	printf("Input operator = ");
	scanf_s("%c", c);

	printf("Input bilangan pertama = ");
	scanf_s("%c", a);

	printf("Input bilangan kedua = ");
	scanf_s("%c", b);

	switch (c)
	{
	case'+':
		int jumlah = a + b;
		printf("Hasil operasi = %d", jumlah);
		break;
	case'-':
		int kurang = a - b;
		printf("Hasil operasi = %d", kurang);
		break;
	case'*':
		int kali = a * b;
		printf("Hasil operasi = %d", jumlah);
		break;
	case'+':
		int jumlah = a + b;
		printf("Hasil operasi = %d", jumlah);
		break;
	case'+':
		int jumlah = a + b;
		printf("Hasil operasi = %d", jumlah);
		break;
	default:
		break;
	}
}

int main() {
/*
	int a, b;
	for (a = 1; a <= 5 ; a++)
	{
		for (b = a; b >= 1; b--) {
			printf("%d", b);
		}
		printf("\n");
	}
	*/

	/*
	int a, b;
	for (a = 1; a <= 5; a++)
	{
		for (b = 5; b >= a; b--) {
			printf("%d", a);
		}
		printf("\n");
	}
	*/

	/*
	int bil1, bil2;
	char operator1;
	int jumlah, kurang, kali, bagi, mod;

	printf("Masukkan operator : ");
	scanf_s("%c", &operator1);
	printf("Masukkan bilangan pertama : ");
	scanf_s("%d", &bil1);
	printf("Masukkan bilangan kedua : ");
	scanf_s("%d", &bil2);

	switch (operator1)
	{
	case '+':
		//jumlah = bil1 + bil2;
		printf("Hasil perhitungan = %d\n", jumlah);
		break;
	case '-':
		kurang = bil1 - bil2;
		printf("Hasil perhitungan = %d\n", kurang);
		break;
	case '*':
		kali = bil1 * bil2;
		printf("Hasil perhitungan = %d\n", kali);
		break;
	case '/':
		bagi = bil1 / bil2;
		printf("Hasil perhitungan = %d\n", bagi);
		break;
	case '%':
		mod = bil1 % bil2;
		printf("Hasil perhitungan = %d\n", mod);
		break;
	default:
		printf("Tidak valid");
		break;
	}
	*/

	/*
	int bil1, bil2;
	char operator1;
	int jumlah, kurang, kali, bagi, mod;

	printf("Masukkan operator : ");
	scanf_s("%c", &operator1);
	printf("Masukkan bilangan pertama : ");
	scanf_s("%d", &bil1);
	printf("Masukkan bilangan kedua : ");
	scanf_s("%d", &bil2);

	if (operator1 == '+') {
		printf("Hasilnya = %d\n", penjumlahan(bil1, bil2));
	}
	else if (operator1 == '-')
	{
		printf("Hasilnya = %d\n", pengurangan(bil1, bil2));
	}
	else if (operator1 == '*')
	{
		printf("Hasilnya = %d\n", perkalian(bil1, bil2));
	}
	else if (operator1 == '/')
	{
		printf("Hasilnya = %d\n", pembagian(bil1, bil2));
	}
	else if (operator1 == '%')
	{
		printf("Hasilnya = %d\n", modulus(bil1, bil2));
	}
	else
	{
		printf("Operator tidak valid");
	}
	*/


	system("pause");
	return 0;
}