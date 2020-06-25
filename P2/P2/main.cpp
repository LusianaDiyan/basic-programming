// #include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <cstdio>
#include <stdlib.h>
#include <vector>
#include <cstdlib>
#include "OperationFile.h"
struct transaksi {
	string tipe, cara, nilai, tanggal, jam;
	transaksi *next;
};
transaksi baru;
transaksi *anyar, *nyar;
transaksi *buyar;
transaksi *head;
transaksi *tail, *tengah;

OperationFile op;

void initiate();
void PrintList();
void addfirst(string tipe, string cara, string nilai, string tanggal, string jam);
int isempty();
void deletefirst();
void insertafter(string tipe, string cara, string nilai, string tanggal, string jam, int index);
void deletenode(int index);
void addlast(string tipe, string cara, string nilai, string tanggal, string jam);
void deletelast();
void getXMLData(string filename);
int toxml(string tipe, string cara, string nilai, string tanggal, string jam);
int Counttransaksi(string filename);

int Counttransaksi(string filename) {
	OperationFile op;
	string text = op.getFile(filename);
	int index = 0;
	int output = 0;
	int start = 0;
	while (true) {
		index = text.find("<tokopedia>", start);

		if (index > text.length())
			break;
		else {
			output++;
			start = index + 1;
		}
	}
	return output;
}
void initiate() {
	head = tail = NULL;
}

int isempty() {
	return (head == NULL) ? 1 : 0;
}

void addfirst(string tipe, string cara, string nilai, string tanggal, string jam) {
	anyar = new transaksi;
	anyar->tipe = tipe;
	anyar->cara = cara;
	anyar->nilai = nilai;
	anyar->tanggal = tanggal;
	anyar->jam = jam;
	if (isempty() == 1)
		head = tail = new transaksi;
	else {
		anyar->next = head;
		head = anyar;
	}
	printf("data baru telah dimasukkan\n");
	system("pause");
	system("cls");
}
void deletefirst() {
	transaksi *temp = head;
	head = head->next;
	free(temp);
	printf("data telah dihapus");
	system("pause");
	system("cls");
}
void insertafter(string tipe, string cara, string nilai, string tanggal, string jam, int index) {
	transaksi *temp1 = head, *temp2;
	tengah = new transaksi;
	tengah->tipe = tipe;
	tengah->cara = cara;
	tengah->nilai = nilai;
	tengah->tanggal = tanggal;
	tengah->jam = jam;
	if (isempty() == 1)
		head = tail = new transaksi;
	else {
		int count = 1;
		while (count < index) {
			if (temp1->next == NULL) {
				printf("index > ukuran");
				break;
			}
			else {
				temp1 = temp1->next;
				count++;
			}
		}
		temp2 = temp1->next;
		temp1->next = tengah;
		tengah->next = temp2;
	}
	printf("data sudah disisipkan");
}
void deletenode(int index) {
	transaksi *temp1 = head, *temp2, *temp3;
	int count = 1;
	while (count < index - 1) {
		temp1 = temp1->next;
		count++;
	}
	temp2 = temp1->next;
	temp3 = temp2->next;
	temp1->next = temp3;
	free(temp2);
	printf("done");
}

void addlast(string tipe, string cara, string nilai, string tanggal, string jam) {
	anyar = new transaksi;
	anyar->tipe = tipe;
	anyar->cara = cara;
	anyar->nilai = nilai;
	anyar->tanggal = tanggal;
	anyar->jam = jam;
	if (isempty() == 1)
		head = tail = new transaksi;
	else {
		anyar->next = tail;
		tail = anyar;
	}
	printf("data baru telah dimasukkan\n");
}

void deletelast() {
	transaksi *temp1 = tail, *temp2 = head;
	while (temp2->next != tail) {
		temp2 = temp2->next;
	}
	tail = temp2;
	tail->next = NULL;
	free(temp1);
	printf("done");
}
int toxml(string tipe, string cara, string nilai, string tanggal, string jam) {
	OperationFile op;
	// op.OverwriteToFile("../p2/Tokped/.xml","<Tokopedia>");
	//  while (n<10){
	printf("masukkan data riwayat transaksi = \n");
	printf("masukkan tipe transaksi= \n");
	cin >> baru.tipe;
	printf("masukkan cara transaksi = \n");
	cin >> baru.cara;
	printf("masukkan nilai transaksi = \n");
	cin >> baru.nilai;
	printf("masukkan tanggal transaksi = \n");
	cin >> baru.tanggal;
	printf("waktu transaksi = \n");
	cin >> baru.jam;
	op.OverwriteToFile("../p2/Tokped.xml", "<Tokopedia>\n""\t<transaksi>\n"
		"\t<tipe>" + baru.tipe + "</tipe>\n"
		"\t<cara>" + baru.cara + "</cara>\n"
		"\t<nilai>" + baru.nilai + "</nilai>\n"
		"\t<tanggal>" + baru.tanggal + "</tanggal>\n"
		"\t<jam>" + baru.jam + "</jam>\n"
		"\t</transaksi>\n"
		"</Tokopedia>");
	return 0;
}
void getXMLData(string filename) {
	OperationFile op;
	transaksi buyar;
	string text = op.getFile(filename);

	int open = 0;
	int pos = 0;
	int close = 0;
	int start = 0;
	int index = 0;

	while (index >= 0) {
		index = text.find("<transaksi>", start);
		printf("index = %d\n", index);
		printf("tl = %d\n", text.length());
		if (index > text.length()) {
			printf("gak isok\n");
			break;
		}
		else {
			open = text.find("<tipe>", start);
			close = text.find("</tipe>", pos);
			string tipe = text.substr(open + 6, close - open - 6);

			open = text.find("<cara_pembayaran>", start);
			close = text.find("</cara_pembayaran>", pos);
			string cara = text.substr(open + 17, close - open - 17);

			open = text.find("<tanggal>", start);
			close = text.find("</tanggal>", pos);
			string tanggal = text.substr(open + 9, close - open - 9);

			open = text.find("<jam>", start);
			close = text.find("</jam>", pos);
			string jam = text.substr(open + 5, close - open - 5);

			open = text.find("<nilai>", start);
			close = text.find("</nilai>", pos);
			string nilai = text.substr(open + 7, close - open - 7);

			//addlast(tipe,cara,tanggal,jam,nilai);

			start = close + 1;
			pos = close + 1;
		}
	}
	system("pause");
}
void PrintList() {
	nyar = head;
	while (nyar != NULL) {
		cout << nyar->tipe << endl;
		cout << nyar->cara << endl;
		cout << nyar->tanggal << endl;
		cout << nyar->jam << endl;
		cout << nyar->nilai << endl;
		nyar = nyar->next;
	}
	system("pause");
}
int main() {
	OperationFile op;
	getXMLData("Tokped.xml");
	PrintList();
	system("pause");
	getchar();
	return 0;
}
