#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define m 256
#include <ctype.h>
int main() {
	/* ARRAY
	char letters[10];
	letters[3]='Z';
	int total=0,jumlah=0,numbers[5]={1,2,3,4,5};
	for(int i=0;i<5;i++){
		jumlah+=numbers[i];
	}
	printf("%c\n",letters[3]);
	printf("%d\n",jumlah);
	float balances[3][5]={1,2,3,4,5,6,7,8,9,1,2,3,4,5,6};
	for(int i=0;i<3;i++){
		for(int j=0;j<5;j++){
			total+=balances[i][j];
		}
	}
	printf("%d\n",total);
	char words[10]="HELLO";
	printf(words);
	int totals[10]={1,2,3,4};
	printf("%d\n",totals[2]);
	char woord[10];
	scanf("%s",woord);
	*/
	//STRING
	//1
	/*char tes[m];
	int low=0,hi=0;
	fgets(tes, sizeof tes,stdin);
	for (int i=0;tes[i];i++){
		if ((tes[i]>=65)&&(tes[i]<=90)){
		hi++;}
		else if ((tes[i]>=97)&&(tes[i]<=122)){
		low++;}
	}
	printf("Low = %d\n",low);
	printf("Hi = %d\n",hi);*/
	//2
	/*
	char n[m];
	fgets(n,sizeof n,stdin);
	for(int i=0;n[i];i++){
		if ((n[i]>=97)&&(n[i]<=122)){
		n[i]=n[i]-32;
		}
	}
	puts(n);
	*/
	//3
	/*
	char input[m];
	int spas=0;
	fgets(input,sizeof input,stdin);
	for (int i=0;input[i];i++){
		if(input[i]==' '){
			spas++;
		}
	}
	printf("%d\n",spas);
	*/
	//4 
	/*
	char n[m];
	fgets(n,sizeof n,stdin);
	for(int i=0;n[i];i++){
		if (n[i]==' ')
		n[i]='\n';
	}
	printf("%s\n",n);
	*/
	//5
	/*
	char input[m],input1[m];
	int n;
	fgets(input,sizeof input,stdin);
	input1=strrev(input);
	n=strcmp(input,input1);
	if(n=0){
		printf("Palindrom coy\n");
	}
	else printf("Non Palindrom\n");
	*/
	//POINTER
	//3
	/*
	char *pkata="Selamat Pagi";
	printf("%s",pkata);
	*/
	//4 
	/*
	char *input="P O L I T E K N I K";
	printf("%c",input[4]);
	*/
	//STRUCT
	//1
	struct record {
		int loop;
		char word[5] = { 'a','b','c','d','e' };
		float sum;
	};
	//2 
	struct record sample;
	sample.loop = 10;
	printf("%d\n", sample.loop);
	printf("%s\n", sample.word);
	struct date {
		int day, month, year;
	};
	struct date today[5];
	for (int i = 0; i < 5; i++) {
		printf("%d : \n", i + 1);
		scanf_s("%d", &today[i].day);
		scanf_s("%d", &today[i].month);
		scanf_s("%d", &today[i].year);
	}
	for (int i = 0; i < 5; i++) {
		printf("%d : \n", i + 1);
		printf("%d", today[i].day);
		printf("%d", today[i].month);
		printf("%d", today[i].year);
	}
}