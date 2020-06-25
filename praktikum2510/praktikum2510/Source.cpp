#include<stdio.h>
#include<stdlib.h>

int main() {
	//while loop
	/*
	int number, i = 1, factorial = 1;
	printf("Enter a positive integer = ");
	scanf_s("%d", &number);

	while (i <= number)
	{
		factorial *= i;
		i++;
	}
	printf("Factorial of %d = %d\n", number, factorial);
	*/

	//1.
	/*
	char huruf = ' ';
	
	while (huruf != 'X')
	{
		printf("Huruf = ");
		scanf_s(" %c", &huruf);
		printf("%c\n", huruf);
	}
	*/

	//2 dan 3
	/*
	int bil, jumlah=0, i=1, max=0, min=999;
	char verif= 'y';

	while(verif == 'y')
	{
		printf("Masukkan bilangan ke- %d = ", i);
		scanf_s("%d", &bil);
		if (bil > max)
		{
			max = bil;
		}
		if (bil<min)
		{
			min = bil;
		}
		printf("Mau memasukkan data lagi[y/t]? ");
		scanf_s(" %c",&verif);
		i++;
		jumlah += bil;
	}
	printf("Jumlah bilangan = %d\n", jumlah);
	printf("Rata - rata bilangan = %d\n", jumlah / (i - 1));
	printf("Maximum = %d\n", max);
	printf("Minimum = %d\n", min);
	*/
	//4
	/*
	int input, i = 1, jumlah=0;
	printf("Input batas = ");
	scanf_s("%d", &input);
	printf("%d", jumlah);

	while (i <= input)
	{
		jumlah = jumlah + i;
		printf(" %d ", jumlah);
		i++;
	}
	printf("\n");
	*/

	//5.
	/*
	int i = 0,s=0, kapital=0, kecil=0, angka = 0;
	char karakter;

	printf("Input = ");

	while ((karakter = getchar()) != '\n')
	{
		i++;
		if (karakter == ' ')
		{
			s++;
		}
		if ('A' <= karakter && karakter <= 'Z')
		{
			kapital++;
		}
		if ('a'<= karakter && karakter <= 'z')
		{
			kecil++;
		}
		if ('0' <= karakter && karakter <= '9') {
			angka++;
		}
	}
	printf("Total karakter = %d\n", i);
	printf("Total spasi = %d\n", s);
	printf("Total huruf kapital = %d\n", kapital);
	printf("Total huruf kecil = %d\n", kecil);
	printf("Total angka = %d\n", angka);
	*/

	//6
	/*
	int input, jumlah=0;

	printf("Input = ");

	while ((input = getchar()) != '\n')
	{
		input = input - 48;
		printf("%d + ", input);
		jumlah += input;
	}
	printf("\nHasil jumlah = %d \n", jumlah);
	*/
	
	//7.
/*
int biayahaji, tabungan, kenaikan, jumlah=0, bulan=0, jmlbulan=0, totalbunga, bonus;
printf("Masukkan berapa biaya awal                  = Rp. ");
scanf_s("%d", &biayahaji);
printf("Masukkan cicilan tiap bulan                 = Rp. ");
scanf_s("%d", &tabungan);
printf("Masukkan rata-rata kenaikan tiap tahun (%%)  = ");
scanf_s("%d", &kenaikan);
printf("Masukkan bonus gaji                         = Rp. ");
scanf_s("%d", &bonus);

int biayaakhir = biayahaji;

while ((biayaakhir-tabungan)>=0)
{
	bulan++;
	biayaakhir -= tabungan;
	if (bulan == 12)
	{
		printf("%d\n", biayaakhir);
		totalbunga = (kenaikan * biayahaji / 100);
		biayahaji += totalbunga;
		biayaakhir += totalbunga;
		bulan = 0;
		biayaakhir = biayaakhir - tabungan - 2 * bonus;
	}
	jmlbulan++;
}
printf("Waktu yang dibutuhkan                        = %d bulan\n", jmlbulan);
*/


	system("pause");
}