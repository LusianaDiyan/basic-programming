#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
	/*
	float F, C;

	printf("Input suhu   =");
	scanf_s("%f", &C);
	printf("\n\n");

	F = C * 1.8 + 32;
	printf("Celcius      = %10.2f\n", C);
	printf("Fahrenheit   = %10.2f\n", F);
	*/

	/*
	int tunjangan1, tunjanak, thr, pajak, transport, asuransi, gapok, lamakerja, total;

	printf("Gaji pokok = ");
	scanf_s("%d", &gapok);
	printf("Lama Kerja = ");
	scanf_s("%d", &lamakerja);
	printf("\n\n");

	tunjangan1 = 0.10 * gapok;
	printf("Tunjangan istri/suami = %5d\n\n", tunjangan1);

	tunjanak = 0.05 * gapok;
	printf("Tunjangan Anak        = %5d\n\n", tunjanak);

	thr = 5000 * lamakerja;
	printf("THR                   = %5d\n\n", thr);

	pajak = 0.15 * (gapok + tunjangan1 + tunjanak);
	printf("Pajak                 = %5d\n\n", pajak);

	transport = 3000 * 360;
	printf("Bantuan transport     = %5d\n\n", transport);

	total = (gapok + tunjangan1 + tunjanak + thr + transport) - pajak  - 20000;
	printf("Total gaji            = %5d\n", total);
	*/

	/*
	int jmTiket, bonus, biaya, tb;
	printf("Masukkan jumlah tiket =");
	scanf_s("%d", &jmTiket);

	bonus = jmTiket / 3;
	printf("Jumlah bonus = %d\n", bonus);

	tb = jmTiket - bonus;
	printf("Jumlah tiket yang dibeli = %d\n", tb);

	biaya = tb * 50000;
	printf("Total biaya = %d\n", biaya);
	*/

	/*
	char c, d;
	c = 'd';
	d = c;

	printf("d = %c", d);

	getchar();
	*/

	int x, result;
	printf("Input x =             ");
	scanf_s("%d", &x);
	printf("\n\n");

	result = 3 * (x*x) - (5 * x) + 6;
	printf("3x^2 - 5x + 6 = %8d\n", result);

	
	system("pause");
	return 0;
	
}