#include<stdio.h>
#include<stdlib.h>

int a, b;
int maks(int a, int b);
void cetak();
int main() {
	
	printf("insert a : ");
	scanf_s("%d", &a);
	printf("insert b : ");
	scanf_s("%d", &b);

	int result;

	printf("max value is : ");
	result = maks(a, b);
	printf("%d", result);
	
	cetak();
	system("pause");
	//return 0;
}

int maks(int a, int b) {
	int result;
	if (a > b)
	{
		result = a;
	}
	else
	{
		result = b;
	}
	return result;
}


void cetak() {
	printf("PRINT");
}