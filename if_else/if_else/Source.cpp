#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
	//int a, result, b;
	//float hasil, a, b;
	//char opsi;
	//opsi = getchar();

	//printf("Masukkan nilai b =  ");
	//scanf_s("%d", &b);

	/*
	if (a >= 0)
	{
		printf("a positif\n\n");
	}
	else
	{
		printf("a negatif\n\n");
	}
	*/
	/*
	if (a % 2 == 0)
	{
		printf("bilangan genap\n");
	}
	else 
	{
		printf("bilangan ganjil\n");
	}
	*/
	/*
	if (a >= 100000)
	{
		result = a - (a * 0.05);
		printf("Total pembelian = Rp %d\n", result);
	}
	else
	{
		printf("Total pembelian = Rp %d\n", a);
	}
	*/
	/*
	if (a % b == 0)
	{
		printf("Bilangan pertama adalah kelipatan persekutuan bilangan kedua\n");
	}
	else
	{
		printf("bilangan pertama bukan kelipatan persekutuan bilangan kedua\n");
	}
	*/
	/*
	if (b == 0)
	{
		printf("division by zero\n");
	}
	else
	{
		hasil = a / b;
		printf("hasilnya = %.3f\n", hasil);
	}
	*/
	/*
	if (a <= 0)
	{
		absolute = -a;
		printf("Nilai absolute dari %d adalah %d\n\n", a, absolute);
	}
	else
	{
		printf("Bilangan bulat = %d\n", a);
		printf("Nilai absolute adalah %d\n\n", a);
	}
	*/
	/*
	if (bil > 0)
	{
		printf("Bilangan %d Kategori A\n\n", bil);
	}
	else
	{
		exit;
	}
	*/
	/*
	if (bil>0)
	{
		printf("Bilangan %d Kategori A\n\n", bil);
	}
	else
	{
		printf("Bilangan %d kategori B\n\n", bil);
	}
	*/
	/*
	if (bil > 0){


	}
	else
	{
		printf("Bilangan %d Kategori B\n\n", bil);
	}
	printf("Bilangan %d Kategori A\n\n", bil);
	*/
	/*
if (opsi == 'Y')
{
	int game1;
	printf("Hitunglah nilai 2 + 5 = ");
	scanf_s("%d", &game1);
	if (game1 == 7)
	{
		int game2;
		printf("Betul\n");
		printf("Hitunglah nilai 2 + 1 = ");
		scanf_s("%d", &game2);
		if (game2 == 3)
		{
			printf("Jawaban Betul\n");
			printf("Finish");
		}
		else
		{
			printf("Salah\n");
		}
	}
	else
	{
		printf("Salah\n");
	}
}
else
{
	printf("Stop\n");
}
*/
/*
int a, b;
	char operan;
	printf("Masukkan operan =  ");
	scanf_s("%c", &operan);
	printf("Masukkan nilai a =  ");
	scanf_s("%d", &a);
	printf("Masukkan nilai b =  ");
	scanf_s("%d", &b);


if (operan == '*')
{
	int hitung1 = a * b;
	printf("%d", hitung1);
}
else if (operan == '+')
{
	int hitung2 = a + b;
	printf("%d\n", hitung2);
}
else if (operan == '-')
{
	int hitung3 = a - b;
	printf("%d\n", hitung3);
}
else if (operan == '/')
{
	int hitung4 = a / b;
	printf("%d\n", hitung4);
}
else
{
	printf("Tidak terdefinisi\n");
}
*/
/*
int n;
printf("Masukkan nilai n = ");
scanf_s("%d", &n);
if (n < 2)
{
	printf("%d kurang dari 2\n", n);
}
else if (n<1)
{
	printf("%d kurang dari 1\n", n);
}
else if (n < 0)
{
	printf("%d kurang dari 0\n", n);
}
else
{
	printf("Tidak Terdefinisi");
}
*/
/*
int n;
printf("Masukkan nilai n = ");
scanf_s("%d", &n);
if (n < 2)
{
	printf("%d kurang dari 2\n", n);
}
if (n < 1)
{
	printf("%d kurang dari 1\n", n);
}
if (n < 0)
{
	printf("%d kurang dari 0\n", n);
}
else
{
	printf("Tidak Terdefinisi");
}
*/

//1.
/*
int suhu;
printf("Masukkan nilai suhu = ");
scanf_s("%d", &suhu);
if (suhu < 0)
{
	printf("Benda berbentuk padat\n");
}
else if (suhu>0 && suhu < 100)
{
	printf("Benda berbentuk cair\n");
}
else
{
	printf("Benda berbentuk gas\n");
}
*/
//2.
/*
int tpa, tk, tp, rata;
printf("Masukkan nilai TPA = ");
scanf_s("%d", &tpa);

printf("Masukkan nilai Tes  Keterampilan = ");
scanf_s("%d", &tk);

printf("Masukkan nilai Tes Psikotes = ");
scanf_s("%d", &tp);

rata = (tpa + tk + tp) / 3;

if (rata >= 75)
{
	if (tpa > tk || tpa > tp)
	{
		printf("Diterima ditempatkan di Bagian Administrasi\n");
	}
	else if (tk > tpa && tk >tp)
	{
		printf("Diterima ditempatkan di Bagian Produksi\n");
	}
	else
	{
		printf("Diterima ditempatkan di Bagian Pemasaran\n");
	}
}
else
{
	printf("Anda belum lolos\n");
}
*/

//3.
/*
int bil1, bil2, pilihan;
printf("Masukkan bilangan pertama = ");
scanf_s("%d", &bil1);

printf("Masukkan bilangan kedua = ");
scanf_s("%d", &bil2);

printf("1. Penjumlahan\n\n");
printf("2. Pengurangan\n\n");
printf("3. Pembagian\n\n");
printf("4. Perkalian\n\n");
printf("Masukkan pilihan anda = ");
scanf_s("%d", &pilihan);

if (pilihan == 1)
{
	int hasil1 = bil1 + bil2;
	printf("Hasil operasi adalah %d\n", hasil1);
}
else if (pilihan == 2)
{
	int hasil2 = bil1 - bil2;
	printf("Hasil operasi adalah %d\n", hasil2);
}
else if (pilihan == 3)
{
	int hasil3 = bil1 / bil2;
	printf("Hasil operasi adalah %d\n", hasil3);
}
else if (pilihan == 4)
{
	int hasil4 = bil1 * bil2;
	printf("Hasil operasi adalah %d\n", hasil4);
}
else
{
	printf("Tidak terdefinisi\n");
}
*/
//4.
/*
int nilai_angka;
printf("Masukkan nilai angka = ");
scanf_s("%d", &nilai_angka);

if (100 >= nilai_angka && nilai_angka > 80)
{
	printf("Nilai Huruf adalah = A\n ");
}
else if (80 >= nilai_angka && nilai_angka>60)
{
	printf("Nilai Huruf adalah = B\n ");
}
else if (60 >= nilai_angka && nilai_angka > 55)
{
	printf("Nilai Huruf adalah = C\n ");
}else if (55 >= nilai_angka && nilai_angka > 40)
{
	printf("Nilai Huruf adalah = D\n ");
}
else
{
	printf("Nilai Huruf adalah = E\n ");
}
*/
int h;
puts("Input bilangan : ");
scanf_s("%d", &h);
if (h == 1)
{
	printf("Minggu\n");
}
else if (h == 2)
{
	printf("Senin\n");
}
else if (h == 3)
{
	printf("Selasa\n");
}
else if (h == 4)
{
	printf("Rabu\n");
}
else if (h == 5)
{
	printf("Kamis\n");
}
else if (h == 6)
{
	printf("Jumat\n");
}
else if (h == 7)
{
	printf("Sabtu\n");
}
else
{
	printf("Hari tidak valid\n");
}
	system("pause");
	return 0;
}