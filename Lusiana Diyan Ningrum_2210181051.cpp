#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>
using namespace std;
#pragma warning(disable:4996)

int main() {

	//write file
	/*
	char nama[50], nama2[50];
	char nrp1[50], nrp2[50];
	FILE *fptr, *copy;
	
	fptr = fopen("C:/Users/USER/Desktop/2210181051\\2210181051_Lusiana.txt", "w");

	if (fptr == NULL)
	{
		printf("Error");

		exit(1);
	}
	
	printf("Enter nama : ");
	gets_s(nama);
	printf("Input NRP : ");
	gets_s(nrp1);

	fprintf(fptr, "%s", nama);
	fprintf(fptr, "\n%s", nrp1);

	copy = fopen("C:/Users/USER/Desktop/2210181051\\2210181051_Lusiana(copy).txt", "w");

	strcpy_s(nama2, nama);
	strcpy_s(nrp2, nrp1);

	fprintf(copy, "%s", nama2);
	fprintf(copy, "\n%s", nrp2);

	fclose(fptr);

	return 0;
	*/

	//read file
	
	char nama[50], nama2[50];
	char nrp1[50], nrp2[50];
	FILE *fptr, *copy;

	if ((fptr = fopen("C:/Users/USER/Desktop/51_PrakProgdas\\2210181051_Lusiana.txt", "r")) == NULL)
	{
		printf("Error! opening file");

		exit(1);
	}

	fscanf(fptr, "%s", &nama);
	printf("value of n=%s", nama);
	fclose(fptr);

	return 0;
	
}