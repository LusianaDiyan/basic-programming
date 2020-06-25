#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//2nd meeting
int main() {
	//1
	//variabel : dolar dan rupiah
	
	int dolar, rupiah;

	dolar = 9;
	printf("input dolar = %d\n", dolar);

	rupiah = 15000 * dolar;
	printf("output rupiah = %d\n", rupiah);
	

	//2
	
	int dolar, rupiah, input_dolar;
	printf("input dolar = ");
	input_dolar = scanf_s("%d", &dolar);
	rupiah = dolar * 15000;
	printf("output rupiah %d\n\n", rupiah);
	

	//2
	
	int uang, input_uang, ratusanribu;
	printf("input uang = ");
	input_uang = scanf_s("%d", &uang);
	//ratusan
	ratusanribu = uang / 100000;
	printf("Lembar 100000 %d\n\n", ratusanribu);
	//limapuluh
	int limapuluhribu;
	limapuluhribu = (uang % 100000) / 50000;
	printf("Lembar 50000 %d\n\n", limapuluhribu);
	//duapuluh
	int duapuluh;
	duapuluh = ((uang % 100000) % 50000) / 20000;
	printf("Lembar 20000 %d\n\n", duapuluh);
	//sepuluhribu
	int sepuluh;
	sepuluh = (((uang % 100000)%50000) % 20000) / 10000;
	printf("Lembar 10000 %d\n\n", sepuluh);
	//limaribu
	int limaribu;
	limaribu = ((((uang % 100000) % 50000) % 20000) % 10000) / 5000;
	printf("Lembar 5000 %d\n\n", limaribu);
	//duaribu
	int duaribu;
	duaribu = (((((uang % 100000) % 50000) % 20000) % 10000) % 5000) / 2000;
	printf("Lembar 2000 %d\n\n", duaribu);
	//seribu
	int seribu;
	seribu = ((((((uang % 100000) % 50000) % 20000) % 10000) % 5000) % 2000) / 1000;
	printf("Lembar 1000 %d\n\n", seribu);
	

	//3
	
	int mod, min, plus, bagi, ops1, ops2;
	int a, b, c, d;
	a = 12;
	b = 2;
	c = 3;
	d = 4;

	//a
	mod = a % b;
	printf("a %% b = %d\n\n", mod);
	//b
	min = a - c;
	printf("a - c = %d\n\n", min);
	//c
	plus = a + b;
	printf("a + b = %d\n\n", plus);
	//d
	bagi = a / d;
	printf("a / d = %d\n\n", bagi);
	//e
	ops1 = a / d * d+ a % d;
	printf("a / d * d+ a %% d = %d\n\n", ops1);
	//f
	ops2 = a % d / d * a - c;
	printf("a %% d / d * a - c = %d\n", ops2);
	

	//4
	
	int D, a, b, c;
	printf("Masukkan a = ");
	scanf_s("%d",&a);
	printf("Masukkan b = ");
	scanf_s("%d",&b);
	printf("Masukkan c = ");
	scanf_s("%d",&c);

	D = (b*b) - (4 * a * c);
	printf("hasil = %d\n", D);
	

	//5.
	
	float mod, min, plus, bagi, ops1, ops2;
	int a, b, c, d;
	a = 12;
	b = 2;
	c = 3;
	d = 4;

	//a
	mod = a % b;
	printf("a mod b = %.2f\n\n", mod);
	//b
	min = a - c;
	printf("a - c = %.2f\n\n", min);
	//c
	plus = a + b;
	printf("a + b = %.2f\n\n", plus);
	//d
	bagi = a / d;
	printf("a / d = %.2f\n\n", bagi);
	//e
	ops1 = ((((a / d) * d)+ a) % d);
	printf("Hasil e = %.2f\n\n", ops1);
	//f
	ops2 = (((a % d) / d) * a) - c;
	printf("Hasil f = %.2f\n\n", ops2);
	

	//5 baru
	
	float D, a, b, c;
	printf("Masukkan a = ");
	scanf_s("%f", &a);
	printf("Masukkan b = ");
	scanf_s("%f", &b);
	printf("Masukkan c = ");
	scanf_s("%f", &c);

	D = (b*b) - (4 * a * c);
	printf("hasil = %.2f\n", D);
	

	system("pause");
	return 0;
	
}	