#include<stdio.h>
#include<stdlib.h>
//#define SIZE 15
//#define MAKS 5
//#define JUM_KOLOM 2
//#define MAX_KAR 256

//#define MAKS 20
/*
void pemasukan_data(float[], int *);
void pengurutan_data(float[], int);
void penampilan_data(float[], int);
*/

/*
void menu() {
	printf("Pilihan Menu \n");
}
*/

/*
int total(int sum[5]) {
	int hasil = 0;
	for (int i = 0; i < 5; i++)
	{
		hasil += sum[i];
	}
	return(hasil);
}
*/

/*
char huruf[2] = { 'a', 'b' };
void cetak(char x) {
	for (int i = 0; i < 2; i++)
	{
		printf("%c", huruf[i]);
	}
}
*/

/*
void tukar(int x, int y)
{
	int z;
	z = x;
	x = y;
	y = z;
	printf("\nNilai di akhir fungsi tukar()\n");
	printf("x = %d y = %d\n", x, y);
}
*/

/*
void tukar(int *px, int *py)
{
	int z;
	z = *px;
	*px = *py;
	*py = z;
	printf("\nNilai di akhir fungsi tukar()\n");
	printf("x = %d y = %d\n", *px, *py);
}
*/

//int nilai[5] = { 40,50,60,70,80 };
int main() {
	//BAB V
	//menu();

	//cetak(x);

	/*
	int input[5];
	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &input[i]);
	}
	printf("Hasil = %d", total(input));
	*/

	/*
	int a, b;
	a = 88;
	b = 77;

	printf("Nilai sebelum pemanggilan fungsi \n");
	printf("a = %d b = %d", a, b);

	tukar(a, b);

	printf("\nNilai setelah pemanggilan fungsi\n");
	printf("a = %d b = %d\n", a, b);
	*/

	/*
	int a, b;
	a = 88;
	b = 77;
	printf("Nilai sebelum pemanggilan fungsi\n");
	printf("a = %d b = %d\n", a, b);
	tukar(&a, &b); 
	printf("\nNilai setelah pemanggilan fungsi\n");
	printf("a = %d b = %d\n", a, b);
	*/

	//BAB VI
	/*
	char letters[10] = {'A', 'B', 'S', 'Z', 'H', 'R', 'L', 'D', 'N', 'I'};
	int indeks, total = 0;
	for (indeks = 0; indeks<= SIZE-1; indeks++)
	{
		total += letters[indeks];
	}
	printf("Total setiap elemen array adalah %d \n", total);
	*/
	
	/*
	float balance[3][5] = {0.2, 0.1, 0, 0.5, 1, 1.2, 1.4, 1.5, 1.4, 1.7, 2, 2.1, 2.2, 2.3, 2.4};
	float a, b;
	for (a = 0; a <= 3; a++)
	{
		printf("[");
		for (b = 0; b <= 5; b++)
		{
			printf(" %d ", balance[3][5]);
		}
		printf("]");
	}
	*/

	/*
	int i;
	float total = 0, rata;
	float nilai_tes[MAKS]; //deklarasi array
	for (i = 0; i < MAKS; i++) //pemasukan data nilai_tes
	{
		printf("Nilai tes ke-%d : ", i + 1);
		scanf_s("%f", &nilai_tes[i]); //menghitung jumlah seluruh nilai
			total = total + nilai_tes[i];
		}
		rata = total / MAKS; //hitung nilai rata-rata
		printf("\nNilai rata-rata = %g\n", rata); //cetak nilai rata-rata
		*/
	/*
	nilai[0] = 40;
	nilai[1] = 50;
	nilai[2] = 60;
	nilai[3] = 70;
	nilai[4] = 80;
	nilai[5] = 90;
	nilai[6] = 100; 
		printf("nilai ke-0= %d\n", nilai[0]);
		printf("nilai ke-1= %d\n", nilai[1]);
		printf("nilai ke-2= %d\n", nilai[2]);
		printf("nilai ke-3= %d\n", nilai[3]);
		printf("nilai ke-4= %d\n", nilai[4]);
		printf("nilai ke-5= %d\n", nilai[5]);
		printf("nilai ke-6= %d\n", nilai[6]);
		nilai[4] = 70;
		printf("nilai ke-0= %d\n", nilai[0]);
		printf("nilai ke-1= %d\n", nilai[1]);
		printf("nilai ke-2= %d\n", nilai[2]);
		printf("nilai ke-3= %d\n", nilai[3]);
		printf("nilai ke-4= %d\n", nilai[4]);
		printf("nilai ke-5= %d\n", nilai[5]);
		printf("nilai ke-6= %d\n", nilai[6]);
		for (int i = 0; i <=4 ; i++)
		{
			printf("nilai ke [%d]= %d\n",i,nilai[i]);
		}
	*/

	
	int i, j, k;
	int data_huruf[5][8][8] = {
	{
	{ 1, 1, 0, 0, 0, 0, 0, 0 } ,
	{ 1, 1, 0, 0, 0, 0, 0, 0 } ,
	{ 1, 1, 0, 0, 0, 0, 0, 0 } ,
	{ 1, 1, 0, 0, 0, 0, 0, 0 } ,
	{ 1, 1, 0, 0, 0, 0, 0, 0 } ,
	{ 1, 1, 0, 0, 0, 0, 0, 0 } ,
	{ 1, 1, 0, 0, 0, 0, 0, 0 } ,
	{ 1, 1, 1, 1, 1, 1, 1, 1 }
	},
	{
	{ 1, 1, 0, 0, 0, 0, 1, 1 } ,
	{ 1, 1, 0, 0, 0, 0, 1, 1 } ,
	{ 1, 1, 0, 0, 0, 0, 1, 1 } ,
	{ 1, 1, 0, 0, 0, 0, 1, 1 } ,
	{ 1, 1, 0, 0, 0, 0, 1, 1 } ,
	{ 1, 1, 0, 0, 0, 0, 1, 1 } ,
	{ 1, 1, 0, 0, 0, 0, 1, 1 } ,
	{ 1, 1, 1, 1, 1, 1, 1, 1 }
	},
	{
	{ 1, 1, 1, 1, 1, 1, 1, 1 } ,
	{ 1, 1, 0, 0, 0, 0, 0, 0 } ,
	{ 1, 1, 0, 0, 0, 0, 0, 0 } ,
	{ 1, 1, 1, 1, 1, 1, 1, 1 } ,
	{ 1, 1, 1, 1, 1, 1, 1, 1 } ,
	{ 0, 0, 0, 0, 0, 0, 1, 1 } ,
	{ 0, 0, 0, 0, 0, 0, 1, 1 } ,
	{ 1, 1, 1, 1, 1, 1, 1, 1 }
	},
	{
	{ 0, 0, 0, 1, 1, 0, 0, 0 } ,
	{ 0, 0, 0, 1, 1, 0, 0, 0 } ,
	{ 0, 0, 0, 1, 1, 0, 0, 0 } ,
	{ 0, 0, 0, 1, 1, 0, 0, 0 } ,
	{ 0, 0, 0, 1, 1, 0, 0, 0 } ,
	{ 0, 0, 0, 1, 1, 0, 0, 0 } ,
	{ 0, 0, 0, 1, 1, 0, 0, 0 } ,
	{ 0, 0, 0, 1, 1, 0, 0, 0 }
	}
	};
	for (i = 0; i < 4; i++) //Tampilkan huruf
	{
		for (j = 0; j < 8; j++)
		{
			for (k = 0; k < 8; k++)
				if (data_huruf[i][j][k] != 0)
					putchar('\xDB');
				else
					putchar(' '); //spasi
			printf("\n"); //pindah baris
		}
		printf("\n"); //pindah baris
	}
	

	/*
	int bulan, tahun, jhari;
	int jum_hari[12] =
	{ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	puts("MEMPEROLEH JUMLAH HARI");
	puts("PADA SUATU BULAN DAN SUATU TAHUN");
	puts("--------------------------------");
	printf("Masukkan bulan (1..12) : ");
	scanf_s("%d", &bulan);
	printf("Masukkan tahunnya : ");
	scanf_s("%d", &tahun);
	if (bulan == 2)
	if (tahun % 4 == 0)
	jhari = 29;
	else
	jhari = 28;
	else
	jhari = jum_hari[bulan - 1];
	printf("\nJumlah hari dalam bulan %d tahun %d adalah %d hari\n", bulan, tahun, jhari);
	*/

	/*
	int i;
	int values[] = { 1,2,3,4,5,6,7,8,9 };
	char word[] = { 'H','e','l','l','o' };
	for (i = 0; i < 9; ++i)
		printf("values[%d] is %d\n", i, values[i]);
	printf("\n");
	for (i = 0; i < 6; ++i)
		printf("word[%d] is %c\n", i, word[i]);
	*/
	
	/*
	int tahun, kode_program;
	int data_lulus[4][3];
	99;
	//Memberikan data ke array 
	data_lulus[0][0] = 80;
	data_lulus[0][1] = 540;
	data_lulus[0][2] = 1032;
	data_lulus[1][0] = 15;
	data_lulus[1][1] = 83;
	data_lulus[1][2] = 301;
	data_lulus[2][0] = 8;
	data_lulus[2][1] = 12;
	data_lulus[2][2] = 15;
	data_lulus[3][0] = 10;
	data_lulus[3][1] = 129;
	data_lulus[3][2] = 257;
	// proses utk memperoleh informasi jml siswa yg lulus 
	printf("Masukkan tahun dr data yg ingin anda ketahui ");
	printf("(1998..2000) : ");
	scanf_s("%d", &tahun);
	printf("Masukkan kode program kursus yang ingin anda ketahui");
	printf("(1 = INTRO, 2 = BASIC, 3 = PASCAL, 4 = C) : ");
	scanf_s("%d", &kode_program);
	printf("\nTotal kelulusan program tsb = %d\n",
		data_lulus[kode_program - 1][tahun - 1998]);
	*/

	/*
	int i, j;
	int huruf_A[8][8] = {
	{ 1, 1, 0, 0, 0, 0, 0, 0 } ,
	{ 1, 1, 0, 0, 0, 0, 0, 0 } ,
	{ 1, 1, 0, 0, 0, 0, 0, 0 } ,
	{ 1, 1, 0, 0, 0, 0, 0, 0 } ,
	{ 1, 1, 0, 0, 0, 0, 0, 0 } ,
	{ 1, 1, 0, 0, 0, 0, 0, 0 } ,
	{ 1, 1, 0, 0, 0, 0, 0, 0 } ,
	{ 1, 1, 1, 1, 1, 1, 1, 1 }
	};
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			if (huruf_A[i][j] != 0)
				putchar('\xDB\n');
			else
				putchar(' '); //spasi
		putchar('\n');
	}
	*/

	/*
	int i;
	float total = 0, rata;
	float nilai_tes[MAKS]; //deklarasi array
		 for (i = 0; i < MAKS; i++) //pemasukan data nilai_tes
		 {
			 printf("Nilai tes ke-%d : ", i + 1);
			 scanf_s("%f", &nilai_tes[i]);
			 //menghitung jumlah seluruh nilai
			 total = total + nilai_tes[i];
		  }
		  rata = total / MAKS; //hitung nilai rata-rata
		  //cetak nilai rata-rata
		 printf("\nNilai rata-rata = %g\n", rata);
		 */

/*
	int bulan, tahun, jhari;
	int jum_hari[12] =
	{ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	puts("MEMPEROLEH JUMLAH HARI");
	puts("PADA SUATU BULAN DAN SUATU TAHUN");
	puts("--------------------------------");
	printf("Masukkan bulan (1..12) : ");
	scanf_s("%d", &bulan);
	printf("Masukkan tahunnya : ");
	scanf_s("%d", &tahun);
	if (bulan == 2)
	if (tahun % 4 == 0)
	jhari = 29;
	else
	jhari = 28;
	else
	jhari = jum_hari[bulan - 1];
	printf("\nJumlah hari dalam bulan %d tahun %d adalah %d hari\n", bulan, tahun, jhari);
	*/

/*
int i;
int values[] = { 1,2,3,4,5,6,7,8,9 };
char word[] = { 'H','e','l','l','o' };
for (i = 0; i < 9; ++i)
	printf("values[%d] is %d\n", i, values[i]);
printf("\n");
for (i = 0; i < 6; ++i)
	printf("word[%d] is %c\n", i, word[i]);
	*/
	
	/*
	char konversi[][JUM_KOLOM] = {
		'A', 'T',
		'a', 't',
		'E', 'M',
		'e', 'm',
		'I', 'V',
		'i', 'v',
		'O', 'S',
		'o', 's',
		'U', 'J',
		'u', 'j'
	};

	char kalimat[MAX_KAR], karakter;
	int i = 0, j, jum_kar, jum_penyandi;
	printf("Masukkan sebuah kalimat dan akhiri dengan ENTER\n");
	printf("Kemudian kalimat tsb akan saya sandikan\n");
	printf("Kalimat: ");
	//Memasukkan data karakter ke array kalimat 
	while ((kalimat[i] = getchar()) != '\n')
	i++;
	jum_kar = i;
	//sandikan dan menampilkan ke layar 
	printf("\nHasil setelah disandikan: ");
	jum_penyandi = sizeof(konversi) / JUM_KOLOM;
	for (i = 0; i < jum_kar; i++)
	{
		karakter = kalimat[i];
		for (j = 0; j < jum_penyandi; j++)
		{
			if (karakter == konversi[j][0])
			{
				karakter = konversi[j][1];
				break; // keluar dari for terdalam 
			}
			if (karakter == konversi[j][1])
			{
				karakter = konversi[j][0];
				break; // keluar dari for terdalam 
			}
		}
		putchar(karakter);
	}
	printf("\n\n");
	*/
/*
float data[MAKS];
int jum_data;
pemasukan_data(data, &jum_data);
pengurutan_data(data, jum_data);
penampilan_data(data, jum_data);

	system("pause");
}
*/
/*
void pemasukan_data(float x[], int *pjumlah)
{
	int jum, i;
	printf("Jumlah data = ");
	scanf_s("%d", &jum);
	for (i = 0; i < jum; i++)
	{
		printf("Data ke-%d : ", i + 1);
		scanf_s("%f", &x[i]);
	}
	*pjumlah = jum;
}
void pengurutan_data(float x[], int jumlah)
{
	int i, j;
	float smtr;
	for (i = 0; i < jumlah - 1; i++)
		for (j = i + 1; j < jumlah; j++)
			if (x[i] > x[j]) // penukaran data 

			{
				smtr = x[i];
				x[i] = x[j];
				x[j] = smtr;
			}
}
void penampilan_data(float x[], int jumlah)
{
	int i;
	printf("\nData setelah diurutkan :\n\n");
	for (i = 0; i < jumlah; i++)
		printf("Data ke-%d : %g\n", i + 1, x[i]);
*/
	system("pause");
}