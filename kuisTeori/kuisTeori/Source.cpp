#include<stdio.h>
#include<stdlib.h>

int main() {
	/*
	int fibonaci[20] = {};
	fibonaci[0] = 5;
	fibonaci[1] = 1;
	int bil_sebelum, bil_sesudah, jumlah;

	printf("%d %d", fibonaci[0], fibonaci[1]);
	for (int i = 0; i < 20-2; i++)
	{
		fibonaci[i+2] = fibonaci[i-0] + fibonaci[i+1];
		printf(" %d", fibonaci[i+2]);
	}
	*/
	/*
	int angka, jml;
	int data[10] = {}, a = 0;
	
	while (data[10] < 9)
	{
		printf("Masukkan angka = ");
		scanf_s("%d", &data[a]);
		a++;
	}

	for (int j = 0; j < a-1; j++)
	{
			if (data[j] > data[j + 1])
			{
				jml = data[j + 1];
				data[j + 1] = data[j];
				data[j] = jml;
			}
	}
	
	for (int i = 0; i < a; i++)
	{
		printf("%d ", data[i]);
	}
	*/

	int y = 0;
	int c;
	int input[12] = {};
	
	while (y<10)
	{
		printf("Masukkan angka : ");
		scanf_s("%d", &input[y]);
		y++;
	}

	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++) {
			if (input[i-1]>input[i])
			{
				c = input[i - 1];
				input[i - 1] = input[i];
				input[i] = c;
			}
		}
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d", input[i]);
	}
	system("pause");
}