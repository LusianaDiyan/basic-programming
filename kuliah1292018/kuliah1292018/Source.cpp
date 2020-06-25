#include<stdio.h>
#include<math.h>

void main() {
	int nilai1 = 20;
	float nilai2 = 500.0f;

	printf("Abad %5d\n", nilai1);
	printf("%10.2f\n", nilai2);
	printf("%10s\n", "Bahasa C");
	printf("%-10s\n", "Bahasa C");

	getchar();
}