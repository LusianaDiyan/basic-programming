#include<stdio.h>
#include<stdlib.h>

/*
void main() {
	int y, x = 87;
	int *px;

	px = &x;
	y = *px;

	printf("Alamat x   = %p\n", &x);
	printf("Isi px     = %p\n", px);
	printf("Isi x      = %p\n", x);
	printf("Nilai yang ditunjuk oleh px = %d\n", *px);
	printf("Nilai y     = %d\n", y);

	system("pause");
}
*/

/*
void main() {
	float d = 54.5f, *pd;
	printf("Isi mula mula = %g\n", d);

	pd = &d;
	*pd += 10;

	printf("Isi d sekarang = %g\n", d);

	system("pause");
}
*/

/*
void main()
{
	static int tgl_lahir[] = { 16, 4, 1974 };
	int *ptgl;
	ptgl = tgl_lahir;
	printf("Nilai yang ditunjuk oleh ptgl = %d\n", *ptgl);
	printf("Nilai dari tgl_lahir[0] = %d\n", tgl_lahir[0]);

	system("pause");
}
*/

/*
void main()
{
	static int tgl_lahir[] = { 16, 4, 1974 };
	int *ptgl, i;
	ptgl = tgl_lahir;
	printf("Nilai yang ditunjuk oleh ptgl = %d\n", *ptgl);
	for (i = 0; i < 3; i++)
		printf("Nilai dari tgl_lahir[i] = %d\n",
			*(ptgl + i));

	system("pause");
}
*/

/*
void main() {
	static int tgl_lahir[] = { 16, 04, 96 };
	int i;
	int *ptgl;

	ptgl = tgl_lahir;

	printf("Nilai yang ditunjuk oleh ptgl = %d\n", *ptgl);
	for ( i = 0; i < 3; i++)
	{
		printf("Nilai daari tgl_lahir[i] = %d\n", *ptgl++);
	}
	system("pause");
}
*/
