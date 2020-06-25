#include<stdio.h>
//#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<iostream>
#include<conio.h>
using namespace std;

int hitung_Year(int thn);
int hitung_Month(int thn, int bln);
int cek_Day(int jmlDay);
int hitung_Day(int bln, int thn);
//void printharijawa(int jmlDay);

int main()
{
	int thn, bln, jmlDay, jumlah_Day, Day;
	int counta = 0;
	printf("Years : ");
	scanf_s("%d", &thn);
	fflush(stdin);
	do {
		printf("Month : ");
		scanf_s("%d", &bln);
		fflush(stdin);
	} while (bln < 1 || bln>12);
	printf("\n. . . Loading . . .\n");
	system("pause");
	//system("cls");
	if (bln == 1) {
		printf("Calendar : January %d", thn);
	}
	else if (bln == 2) {
		printf("Calendar : February %d", thn);
	}
	else if (bln == 3) {
		printf("Calendar : March %d", thn);
	}
	else if (bln == 4) {
		printf("Calendar : April %d", thn);
	}
	else if (bln == 5) {
		printf("Calendar : May %d", thn);
	}
	else if (bln == 6) {
		printf("Calendar : June %d", thn);
	}
	else if (bln == 7) {
		printf("Calendar : July %d", thn);
	}
	else if (bln == 8) {
		printf("Calendar : August %d", thn);
	}
	else if (bln == 9) {
		printf("Calendar : September %d", thn);
	}
	else if (bln == 10) {
		printf("Calendar : October %d", thn);
	}
	else if (bln == 11) {
		printf("Calendar : November %d", thn);
	}
	else if (bln == 12) {
		printf("Calendar : Desember %d", thn);
	}

	jmlDay = hitung_Year(thn) + hitung_Month(thn, bln);
	Day = cek_Day(jmlDay);
	jumlah_Day = hitung_Day(bln, thn);
	//printharijawa(jumlah_Day);

	printf("\n\n=====================================================\n");
	printf("Sun\tMon\tTue\tWed\tThu\tFri\tSat\n");
	printf("=====================================================\n");


	for (int i = 0; i < Day; i++) {
		printf("\t");

	}

	for (int i = 1; i <= jumlah_Day; i++) {
		printf("%d\t", i);

		//printf("\t");
		//printf("\n");

		if (Day % 7 == 6) {
			printf("\n");

			for (int i = 1; i <= 7; i++) {

				switch (jmlDay % 5)
				{

				case 1:
					printf("PAHING");
					break;
				case 2:
					printf("PON");
					break;
				case 3:
					printf("WAGE");
					break;
				case 4:
					printf("KLIWON");
					break;
				case 0:
					printf("LEGI ");
					break;
				default:
					printf("ERROR");
					break;
				} //tutup switch
				printf("\t");
				jmlDay++;
				counta++;

				if (counta == 7) {
					printf("\n");
					counta = 0;
				}

			} //tutup for

		} //tutup if   





		if (Day % 7 == 6) {
			printf("\n");

		}
		Day++;

	}

	_getch();
	return 0;
}

int hitung_Year(int thn) {
	int jmlDay = 0, year;
	for (year = 1900; year < thn; year++) {
		if (year % 4 == 0) {
			jmlDay += 366;
		}
		else {
			jmlDay += 365;
		}
	}
	return(jmlDay);
}

int hitung_Month(int thn, int bln) {
	int jmlDay = 0, Month;
	for (Month = 1; Month < bln; Month++)
	{
		if (Month == 1 || Month == 3 || Month == 5 || Month == 7 || Month == 8 || Month == 10 || Month == 12) {
			jmlDay += 31;
		}
		else if (Month == 4 || Month == 6 || Month == 9 || Month == 11) {
			jmlDay += 30;
		}
		else {
			if (thn % 4 == 0) {
				jmlDay += 29;
			}
			else
				jmlDay += 28;
		}
	}
	return(jmlDay);
}

int cek_Day(int jmlDay) {
	int Day = jmlDay % 7;
	return(Day);
}

int hitung_Day(int Month, int thn)
{
	int jmlDay = 0;
	if (Month == 1 || Month == 3 || Month == 5 || Month == 7 || Month == 8 || Month == 10 || Month == 12) {
		jmlDay += 31;
	}
	else if (Month == 4 || Month == 6 || Month == 9 || Month == 11) {
		jmlDay += 30;
	}
	else {
		if (thn % 4 == 0)
			jmlDay += 29;
		else
			jmlDay += 28;
	}
	return(jmlDay);
}
