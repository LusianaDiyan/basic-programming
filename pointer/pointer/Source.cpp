#include<stdio.h>
#include<iostream>
#include<string.h>

// **********POINTRE 1*************
//1.
/*
int main() {
	int y, x = 87;
	int *px;
	px = &x;
	y = *px;
	printf("Alamat x = %p\n", &x);
	printf("Isi px = %p\n", px);
	printf("Isi x = %d\n", x);
	printf("Nilai yang ditunjuk oleh px = %d\n", *px);
	printf("Nilai y = %d\n", y);

	system("pause");
}
*/

//2.
/*
int main() {
	double *pu, nu;
	double u = 1234.0;
	pu = &u;
	nu = *pu;
	printf("Alamat dari u = %p\n", &u);
	printf("Isi pu = %p\n", pu);
	printf("Isi u = %lf\n", u);
	printf("Nilai yang ditunjuk oleh pu = %f\n", *pu);
	printf("Nilai nu = %f\n", nu);

	system("pause");
}
*/

//3.
/*
int main() {
	float d = 54.5f, *pd;
	printf("Isi d mula-mula = %g\n", d);
	pd = &d;
	*pd += 10;
	printf("Isi d sekarang = %g\n", d);

	system("pause");
}
*/

//4.
/*
int main() {
	int z = 20, s = 30, *pz, *ps;
	pz = &z;
	ps = &s;
	*pz += *ps;
	printf("z = %d\n", z);
	printf("s = %d\n", s);

	system("pause");
}
*/

//5.
/*
int main() {
	char c = 'Q', *cp = &c;
	printf("%c %c\n", c, *cp);
	c = '/';
	printf("%c %c\n", c, *cp);
	*cp = '(';
	printf("%c %c\n", c, *cp);

	system("pause");
}
*/

//6.
/*
int main() {
	int x = 1, y = 2, *ip;
	ip = &x;
	y = *ip;
	*ip = 3;
	printf("x = %d, y = %d", x, y);

	system("pause");
}
*/

//7.
/*
int main() {
	int i1, i2, *p1, *p2;
	i1 = 9;
	p1 = &i1;
	i2 = *p1 / 2 - 2 * 3;
	p2 = p1;
	printf("i1=%d,i2=%d,*p1=%d,*p2=%d\n", i1, i2, *p1, *p2);

	system("pause");
}
*/

//8
/*
int main() {
	int count = 10, *temp, sum = 7;
	temp = &count;
	*temp = 32;
	temp = &sum;
	*temp = count;
	sum = *temp * 4;
	printf("count=%d, *temp=%d, sum=%d\n", count, *temp, sum);

	system("pause");
}
*/

//9.
/*
int main() {
	int count = 13, sum = 9, *x, *y;
	x = &count;
	*x = 27;
	y = x;
	x = &sum;
	*x = count;
	sum = *x / 2 * 3;
	printf("count=%d, sum=%d, *x=%d, *y=%d\n", count, sum, *x, *y);

	system("pause");
}
*/

//10.

/*
int r, q = 7;
int go_crazy(int *, int *);
int main() {
	int *ptr1 = &q;
	int *ptr2 = &q;
	r = go_crazy(ptr1, ptr2);
	printf("q=%d, r=%d, *ptr1=%d,*ptr2=%d\n", q, r, *ptr1, *ptr2);
	ptr2 = &r;
	go_crazy(ptr2, ptr1);
	printf("q=%d, r=%d, *ptr1=%d, *ptr2=%d\n", q, r, *ptr1, *ptr2);
	
	system("pause");
}
int go_crazy(int *p1, int *p2) {
	int x = 5;
	r = 12;
	*p2 = *p1 * 2;
	p1 = &x;
	return *p1 * 3;
}
*/

//************POINTER 2**********
//1.
/*
int main() {
	static int tgl_lahir[] = { 16, 4, 1974 };
	int *ptgl;
	ptgl = tgl_lahir;
	printf("Nilai yang ditunjuk oleh ptgl = %d\n", *ptgl);
	printf("Nilai dari tgl_lahir[0] = %d\n", tgl_lahir[0]);

	system("pause");
}
*/

//2
/*
int main() {
	static int tgl_lahir[] = { 16, 4, 1974 };
	int *ptgl, i;
	ptgl = tgl_lahir;
	printf("Nilai yang ditunjuk oleh ptgl = %d\n", *ptgl);
	for (i = 0; i < 3; i++)
		printf("Nilai dari tgl_lahir[i] = %d\n", *(ptgl + i));

	system("pause");
}
*/

//3
/*
int main() {
	static int tgl_lahir[] = { 16, 4, 1974 };
	int i;
	int *ptgl;
	ptgl = tgl_lahir;
	printf("Nilai yang ditunjuk oleh ptgl = %d\n", *ptgl);
	for (i = 0; i < 3; i++)
		printf("Nilai dari tgl_lahir[i] = %d\n", *ptgl++);

	system("pause");
}
*/

//4
/*
#define PANJANG 20
char nama1[PANJANG] = "AHMAD";
char nama2[PANJANG] = "RIFDA";
int main() {
	char namax[PANJANG];
	puts("SEMULA : ");
	printf("nama1 --> %s\n", nama1);
	printf("nama2 --> %s\n", nama2);
	strcpy_s(namax, nama1);
	strcpy_s(nama1, nama2);
	strcpy_s(nama2, namax);
	puts("KINI : ");
	printf("nama1 --> %s\n", nama1);
	printf("nama2 --> %s\n", nama2);

	system("pause");
}
*/

//5.
/*
const char *nama1 = "AHMAD";
const char *nama2 = "RIFDA";
int main() {
	char *namax;
	puts("SEMULA : ");
	printf("nama1 --> %s\n", nama1);
	printf("nama2 --> %s\n", nama2);
	namax = nama1;
	nama1 = nama2;
	nama2 = namax;
	puts("KINI : ");
	printf("nama1 --> %s\n", nama1);
	printf("nama2 --> %s\n", nama2);
}
*/

//6
/*
int main() {
	int nilai[10] = { 86,75,98,66,56,76,80,95,70,60 };
	int index, *ip;
	printf("Mencetak menggunakan array\n");
	printf("Daftar nilai siswa\n\n");
	for (index = 0; index < 10; index++)
		printf("%3d", nilai[index]);
	puts("\n");
	printf("Mencetak menggunakan pointer dan index\n");
	printf("Daftar nilai siswa\n\n");
	for (index = 0; index < 10; index++)
		printf("%3d", *(nilai + index));
	puts("\n");
	printf("Mencetak menggunakan pointer\n");
	printf("Daftar nilai siswa\n\n");
	ip = nilai;
	for (index = 0; index < 10; index++)
		printf("%3d", *ip++);

	system("pause");
}
*/

//7
/*
int main() {
	char *text_pointer = "Good morning!";
	for (; *text_pointer != '\0'; ++text_pointer)
		printf("%c", *text_pointer);

	system("pause");
}
*/

//8
/*
int array1[10], array2[10];
int *ip1, *ip2 = array2;
int *akhir = &array1[10];
*/

// ************POINTER 3************
//1
/*
void main() {
	const char *days[] = { "Sun", "Mon", "Tues", "Wed", "Thu", "Fri", "Sat" };
	int i;
	for (i = 0; i < 6; ++i)
		printf("%s\n", days[i]);

	system("pause");
}
*/

//2
/*
int main() {
	int a, *b, **c;
	a = 155;
	b = &a;
	c = &b;
	printf("Nilai a = %d atau %d atau %d\n", a, *b, **c);
	printf("b = %p = alamat a di memori\n", b);
	printf("c = %p = alamat b di memori\n", c);
	printf("alamat c di memori = %p\n", &c);

	system("pause");
}
*/

//3
/*
int main() {
	int var_x = 273;
	int *ptr1;
	int **ptr2;
	ptr1 = &var_x;
	ptr2 = &ptr1;

	printf("Nilai var_x = *ptr1 = %d\n", *ptr1);
	printf("Nilai var_x = **ptr2 = %d\n\n", **ptr2);
	printf("ptr1 = &var_x = %p\n", ptr1);
	printf("ptr2 = &ptr1 = %p\n", ptr2);
	printf(" &ptr2 = %p\n", &ptr2);

	system("pause");
}
*/

//4
/*
int main() {
	int a, *b, **c;
	a = 1975;
	b = &a;
	c = &b;
	printf("Nilai a = %d atau %d atau %d\n", a, *b, **c);
	printf("b = %p = alamat a di memori\n", b);
	printf("c = %p = alamat b di memori\n", c);
	printf("alamat c di memori = %p\n", &c);

	system("pause");
}
*/

//6
/*
void main() {
	int a[5] = { 2,4,8,1,23 };
	int c = 5;
	int *ptr1 = &c;
	int *ptr2 = a;

	system("pause");
}
*/

//************POINTER 4******
//2
/*
char *nama_bulan(int n);
main() {
	int bl;
	printf("Bulan 1..12 : ");
	scanf("%d", &bl);
	printf("Bulan ke-%d adalah %s\n", bl, nama_bulan(bl));
}
char *nama_bulan(int n) {
	 char *bulan[] = {
	"Ngawur",
	"Januari",
	"Februari",
	"Maret",
	"April",
	"Mei",
	"Juni",
	"Juli",
	"Agustus",
	"September",
	"Oktober",
	"November",
	"Desember"
	};
	
		return ((n < 1 || n>12) ? bulan[0] : bulan[n]);
}
*/

//4
/*
char *my_strcpy(char *, char *);
int main() {
	char strA[80] = "A string to be used for demonstration";
	char strB[80];
	my_strcpy(strB, strA);
	puts(strB);
}
char *my_strcpy(char *destination, char *source) {
	char *p = destination;
	while (*source != '\0')
		*p++ = *source++;
	*p = '\0';
	return destination;
}
*/

/*
void rotasi(int*, int *, int *);
void main() {
	int a, b, c;
	printf("======MEROTASI NILAI VARIABEL===\n");
	printf("masukkan nilai A=");
	scanf_s("%d", &a);
	fflush(stdin);
	printf("masukkan nilai B=");
	scanf_s("%d", &b);
	fflush(stdin);
	printf("masukkan nilai C=");
	scanf_s("%d", &c);
	fflush(stdin);
	printf("\n\n Nilai sebelum di rotasi A=%d  , B=%d  , C=%d", a, b, c);
	rotasi(&a, &b, &c);
	printf("\n\n Nilai sesudah di rotasi A=%d  ,B=%d  ,C=%d\n", a, b, c);
	system("pause");
}

void rotasi(int *x, int *y, int *z) {
	int tmp;
	tmp = *x;
	*x = *y;
	*y = *z;
	*z = tmp;

}
*/

/*
int main() {

	//deklarasi variabel x dengan tipe data int
	int x;

	//deklarasi pointer p dengan tipe data int
	int *p;

	x = 20;
	p = &x;

	printf("\t\t===== Program Contoh Pointer =====\n\n");

	printf("Nilai X       : %d\n", x);
	printf("Alamat X (&X) : %d\n", &x);

	printf("Nilai yang ditunjuk *P   : %d\n", *p);
	printf("Alamat yang ditunjuk *P  : %d\n", p);
	printf("Alamat *P (&P)           : %d\n", &p);

	// mengisi nilai 30 kedalam *p / alaman yang ditunjuk pointer p
	// untuk megisikan nilai melalui alamat pointer gunakan *
	// karena alamat memori yang ditunjuk pointer p merupakan alamat memori variabel x
	// maka nilai dari variabel x juga ikut berubah
	*p = 30;

	printf("\n\n\nNilai X   : %d\n", x);
	printf("Alamat X (&X)   : %d\n", &x);

	printf("Nilai yang ditunjuk *P   : %d\n", *p);
	printf("Alamat yang ditunjuk *P  : %d\n", p);
	printf("Alamat *P (&P)           : %d\n", &p);

	system("pause");
}
*/