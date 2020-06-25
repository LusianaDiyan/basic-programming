#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
//#define MAKS 256
//#define MAKS 80
#define PJG 15

/*
//nomor 1
int main ()
{
	char kalimat[256];
	int jumkar=0,jumkarbes=0;
	gets_s(kalimat);
	int b=strlen(kalimat);
	for(int i=0;i<=b;i++)
	{
	if(kalimat[i]>='A'&&kalimat[i]<='Z')
	{
		jumkar++;
	}
	else if(kalimat[i]>='a'&&kalimat[i]<='z')
	{
		jumkarbes++;
	}
	}
	printf("Jumlah huruf kapital = %d\nJumlah huruf kecil = %d \n", jumkar, jumkarbes);

	system("pause");
}
*/

/*
//nomor 2
int main ()
{
	char kalimat[256];
	gets_s(kalimat);
	_strupr_s(kalimat);
	printf("%s\n", kalimat);
	system("pause");
}
*/

/*
//2
int main() {
	char nama[50];
	gets_s(nama);
	_strupr_s(nama);
	_strrev(nama);
	puts(nama);

	system("pause");
}
*/

/*
//nomor3
int main ()
{
char kalimat[256];int spasi=0;
	gets_s(kalimat);
	int b=strlen(kalimat);
	for(int i=0;i<=b;i++)
	{
		if(kalimat[i]==' ')
		{
			spasi++;
		}
	}
		printf("%d", spasi);
		system("pause");
}
*/

/*
//nomor 4,
void main ()
{
	char kalimat[256];
	gets_s(kalimat);
	for(int i=0;kalimat[i];i++)
	{
		if(kalimat[i]=' ')
		{
			kalimat[i] = '\n';
		}
	}
	printf("%s\n", kalimat);
	system("pause");
}
*/

/*
//nomor 5
int main ()
{
	char kalimat[256], kalimat1[256];
	//char b;
	gets_s(kalimat);
	_strupr(kalimat);
	strcpy_s(kalimat1, kalimat);
	_strrev(kalimat1);
	//printf("%s", kalimat1);
	int komparasi = strcmp(kalimat,kalimat1);
	if(komparasi==0)
		printf("Palindrom\n");
	else
		printf("Non Palindrom\n");
	system("pause");
}
*/

/*
int main() {
	char name[15];
	printf("Masukkan Nama Anda  = ");
	gets_s(name);

	printf("\n Halo, %s . Selamat Belajar string. \n", name);

	system("pause");
}
*/

//puts = otomatis memberi enter
//printf = tdk memberi perintah enter, harus diperintah manual
/*
void bentuk1() {
	char kompiler_c[] = {'V','i','s','u','a','l',' ','C','+','+','\0'};

	puts(kompiler_c);
}
void bentuk2(void)
	{
		char kompiler_c[] = "Visual C++";
		printf("%s\n", kompiler_c);
	}
int main() {
	bentuk1();
	bentuk2();

	system("pause");
}
*/
/*
int main() {
	int i, jumlah = 0;
	char teks[MAKS];

	puts("Masukkan suatu kalimat (maks 255 karakter).");
	puts("Saya akan menghitung jumlah karakternya.\n");
	fgets(teks, sizeof teks, stdin); //masukan dr keyboard
	for (i = 0; teks[i]; i++)
		jumlah++;
	printf("\nJumlah karakter = %d\n", jumlah);

	system("pause");
}
*/
/*
int main() {
	int i;
	char asal[] = "Saya menyukai bahasa C";
	char hasil[MAKS];
	i = 0;
	while (asal[i] != ‘\0’)
	{
		hasil[i] = asal[i];
		i++;
	}
	hasil[i] = ‘\0’; // beri karakter NULL
	printf("Isi hasil : %s\n", hasil);
}
*/
/*
int main() {
	char str1[MAKS];
	char str2[] = "ABCDE";
	strcpy(str1, str2); // menyalin isi str2 ke str1 
	printf("String pertama adalah : %s\n", str1);
	printf("String kedua adalah : %s\n", str2);
}
*/
/*
int main() {
	char salam[] = "Hallo";
	printf("Panjang string = %d karakter\n", strlen(salam));
	system("pause");

}
*/
/*
int main() {
	char str1[PJG], str2[PJG];
	strcpy_s(str1, "sala"); // str1 diisi “sala”
	strcpy_s(str2, "tiga"); // str2 diisi “tiga”
	strcat_s(str1, str2); // tambahkan str2 ke akhir str1
	printf("str1 -> %s str2 -> %s\n", str1, str2);

	system("pause");
}
*/
/*
int main() {
	char str1[] = "HALO";
	char str2[] = "Halo";
	char str3[] = "HALO";

	printf("Hasil pembandingan %s dengan %s-- > %d\n",
		str1, str2, strcmp(str1, str2));
	printf("Hasil pembandingan %s dengan %s-- > %d\n",
		str2, str1, strcmp(str2, str1));
	printf("Hasil pembandingan %s dengan %s-- > %d\n",
		str1, str3, strcmp(str1, str3));

	system("pause");
}
*/

/*
int main() {
	char str[] = "ABcde";
	char *hasil1, *hasil2;

	hasil1 = strchr(str, 'B');
	hasil2 = strchr(str, 'X');

	printf("Dari string ABcde \n");
	printf("Mencari karakter d = %s \n", hasil1);
	printf("Mencari karakter X = %s \n", hasil2);
	system("pause");
}
*/

/*
void main() {
	char words[99] = {"AKU"};
	int i = 0;
	while (words[i] != '\0')
	{
		printf("%c \n", words[i]);
		i++;
	}

	system("pause");
}
*/

int main() {
	int kalimat[256];
	gets_s(kalimat);


}