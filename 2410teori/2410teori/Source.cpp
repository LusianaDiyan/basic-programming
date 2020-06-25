#include <stdio.h>
#include <stdlib.h>
#include<math.h>

void main() {
	/*
	int a, b;
	for ( a = 0; a < 3; a++)
	{
		for (b = 0; b < 4; b++) {
			printf(" 1");
		}
		printf("\n");
	}
	*/
	int a, b;
	for (a = 0; a <= 4; a++) {
		for ( b = a; b <= 3; b++)
		{
			printf("1");
		}
		printf("\n");
	}
	getchar();
}