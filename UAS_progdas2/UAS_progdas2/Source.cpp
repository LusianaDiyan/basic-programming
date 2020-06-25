#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<iostream>
#pragma warning (disable:4996)
using namespace std;


struct kategori {			//deklarasi struct
	char judul[255][255];	//variabel anggota struct
	int kode[255];
	
}rak; //variabel yang bertipe data struct



void input(struct kategori rak) {	//fungsi input, untuk input data buku baru
	
	int jml;						//variabel jumlah dengan tipe data integer
	printf("\nDaftar Kategori");	//tampilan daftar kategori dan kode kategori
	printf("\nKode Kategori");
	//printf("\n1    Novel");
	printf("\n1    Komik");
	printf("\n2    Ensiklopedi");
	printf("\n3    Majalah");
	printf("\n4    Koran");
	printf("\n======================================================\n");
	printf("\nBerapa Jumlah Buku Baru : ");	//input jumlah buku baru
	scanf_s("%d", &jml);

	for (int i = 0; i < jml; i++)			//looping input data buku baru(kategori dan judul)
	{
		printf("\n\nBuku ke-%d", i + 1);
		printf("\nKategori 1/2/3/4 : ");
		scanf_s("%d", &rak.kode[i]);		//input kode kategori
		printf("\nJudul Buku  = ");
		cin >> rak.judul[i];				//input judul buku
		
		getchar();							//mengakhiri input-an dengan enter
	}

	
}

void tampil(struct kategori buku) {			//fungsi untuk menampilkan hasil input kategori dan judul
	char ktgr[20];							//array yang menyimpan kategori
	int i;									

	printf("\n======================================================");	
	printf("\n\nList Buku Anda :\n");
	printf("\n\t\t\t PERPUSTAKAAN PENS");
	printf("\n======================================================");
	printf("\nNo\tJudul Buku\tKategori");
	printf("\n======================================================");

	for (i = 1; i < 0; i++)					//loop untuk menampilkan kategori buku yang telah diinput
	{
		switch (rak.kode[i]) {				//pengkondisian variabel rak.kode[] sesuai case
		case 1:									
			strcpy_s(ktgr, "Novel");		//mengkonversi kode 1 menjadi "Novel"
			break;							//menghentikan argumen jika sudah sesuai case yang ditentukan
		case 2:
			strcpy_s(ktgr, "Komik");		//mengkonversi kode 2 menjadi "Komik"
			break;
		case 3:
			strcpy_s(ktgr, "Ensiklopedia");	//mengkonversi kode 3 menjadi "Ensiklopedia"
			break;
		case 4:
			strcpy_s(ktgr, "Majalah");		//mengkonversi kode 4 menjadi "Majalah"
			break;
		}

		
	}

	printf("\n%d\t%s\t\t%s",i+1, rak.judul[0], ktgr);	//mencetak data yang sudah di input
	printf("\n======================================================\n");
	//printf("\n\t\t\t\t\t\tJumlah buku\t %d buah", i+1);
}

int tampil_buku(int kode) {					//fungsi untuk menampilkan daftar buku yang sudah tersimpan
	
	//char novel[25][25] = { "Hujan","Sang Pemimpi","Perahu Kertas","Ayah","Laskar Pelangi" };
	char komik[25][25] = { "Naruto","Detective Conan","One Piece","Doraemon","Dragon Ball" }; //array yang menyimpan daftar buku sesuai kategori
	char ensi[25][25] = { "Atlas Of The Human Body","National Geographic","Visual Dinosaurus","Why? - Light and Sound","Asal Mula Nama Daerah" };
	char majalah[25][25] = { "Tempo","Bobo","Cosmopolitan","Vogue","Gadis" };
	char koran[25][25] = { "Kompas","Sindo","Jawa Pos" };

		switch (kode)									//pengkondisian sesuai kode kategori
		{
		/*case 1:
			printf("Koleksi Novel : \n");
			for (int i = 0; i <5; i++) {
				printf("%d\t%s\n", i+1,novel[i]);
			}
			break;*/

		case 1:
			printf("Koleksi Komik : \n");
			for (int i = 0; i < 5; i++) {				//looping sejumlah banyak buku
				printf("%d\t%s\n", i + 1, komik[i]);	//mencetak isi array komik
			}
			break;										//menghentikan argumen setelah case sesuai yang ditentukan

		case 2:
			printf("Koleksi Ensiklopedia : \n");
			for (int i = 0; i < 5; i++) {				//looping sejumlah banyak buku
				printf("%d\t%s\n", i + 1, ensi[i]);		//mencetak isi array ensi
			}
			break;										//menghentikan argumen setelah case sesuai yang ditentukan

		case 3:
			printf("Koleksi Majalah : \n");
			for (int i = 0; i < 5; i++) {				//looping sejumlah banyak buku
				printf("%d\t%s\n", i + 1, majalah[i]);	//mencetak isi array majalah
			}
			break;										//menghentikan argumen setelah case sesuai yang ditentukan
		case 4:
			printf("Koleksi Koran : \n");
			for (int i = 0; i < 3; i++) {				//looping sejumlah banyak buku
				printf("%d\t%s\n", i + 1, koran[i]);	//mencetak isi array koran
			}
			break;										//menghentikan argumen setelah case sesuai yang ditentukan

		default:										//untuk case selain yang ditentukan di atas
			printf("Data tidak valid");					//mencetak bahwa data tidak valid
			break;										//menghentikan argumen setelah case sesuai yang ditentukan
		}

		return 0;										//pengembalian nilai
}


int main() {											//fungsi utama

	int ktg_buku, pilih;								//variabel dengan tipe data integer

	printf("\n\n=========== PERPUSTAKAAN PENS ============");	//mencetak menu
	printf("\nMENU : \n\n");
	printf("1. Lihat Buku\n");
	printf("2. Tambahkan Buku\n");
	printf("PILIHAN ANDA ADALAH [1/2] ? ");				
	scanf_s("%d", &pilih);								//meng-input pilihan user

	if (pilih == 1) {									//pengondisian apabila user menginput 1
		printf("\nDaftar Kategori");					//mencetak daftar kategori dan kode kategori
		printf("\nKode Kategori");
		//printf("\n1    Novel");
		printf("\n1    Komik");
		printf("\n2    Ensiklopedi");
		printf("\n3    Majalah");
		printf("\n4    Koran");

		printf("\n\nMasukkan kategori buku : ");
		scanf_s("%d", &ktg_buku);						//meng-input kategori buku
		tampil_buku(ktg_buku);							//memanggil fungsi tampil_buku() dengan parameter ktg_buku
		//membuat file baru
		FILE *ptr;										//variabel pointer 									
		int tpl;										//variabel dengan tipe data integer
		ptr = fopen("D:/Pemrograman Dasar\\kelompok7.txt", "w");	//membuka file

		if (ptr == NULL)								//pengkondisian apabila file tidak ada
		{
			printf("Error");							//mencetak bahwa error

			exit(1);									//keluar dari program
		}
		tpl = tampil_buku(ktg_buku);					//variabel yang memanggil fungsi tampil_buku()

		//gets_s(tpl);

		fprintf(ptr, "%d", tpl);						//mencetak pada file

		fclose(ptr);									//menutup file
	}
	else if(pilih == 2)									//pengkondisian apabila user menginput 2
	{
		input(rak);										//memanggil fungsi input() = untuk memasukkan data buku yang baru
		tampil(rak);									//memanggil fungsi tampil() = untuk menampilkan data buku yang baru diinputkan
	}
	else												//apabila kondisi selain yang sudah ditentukan di atas
	{
		printf("Data Yang Anda Masukkan Tidak Valid\n");	//mencetak bahwa data tidak valid
	}

	system("pause");									//agar console tidak langsung menutup setelah di debug
}
//Dari program ini, program yang menampilkan hasil inputan (pilihan no. 2) tidak berhasil.  Setelah menginput kode kategori dan judul,
//data tidak bisa disimpan dan ditampilkan. 
//Kemudian ketika membuat file, file dapat dibuat tetapi tidak berisi yang seharusnya ditampilkan (daftar buku sesuai kategori)
//dikarenakan '=' tidak dapat mengkonversi dari tipe data void ke int. Dan jika tipe data dirubah, maka daftar buku akan tercetak 2 kali
//pada console dan tidak tercetak di file txt.

/*
void input(struct kategori buku[]) {
	char jawab;
	printf("\n======================================================");
	printf("\nMasukkan Judul Buku Anda");

	while (jawab == 'Y' || jawab == 'y') {
		printf("\n\nBuku ke-%d", n + 1);
		printf("\nKategori 1/2/3/4 : ");
		//scanf(" %c", &buku[n].kode);
		printf("Judul Buku  = ");
		//scanf("%d", &buku[n].judul);
		n++;
		printf("Input lagi [y/n] ? ");
		scanf_s("%c", &jawab);
	}
}
*/
/*
void tampil_buku(struct detail buku[], int kategori) {
	char* ktg;
	switch (kategori) {
	case 1: strcpy(ktg, "novel"); break;
	case 2: strcpy(ktg, "komik"); break;
	case 3: strcpy(ktg, "ensiklopedia"); break;
	case 4: strcpy(ktg, "majalah"); break;
	}
	printf("\nbuku yang tersedia Pada Kategori %s adalah : \n\n", ktg);
	printf("No\tJudul\t\tKode\n");
	for (int i = 0; i < sizeof(buku) / sizeof(int); i++) {
		printf("%d. \t%s \t%s\n", i + 1, buku[i].judul, buku[i].kode);
	}

}
*/
/*
int main() {

	//novel data
	strcpy_s(novel[0].kode, "D1");
	strcpy_s(novel[0].judul, "Hujan Hujan");

	strcpy_s(novel[1].kode, "R1");
	strcpy_s(novel[1].judul, "Sang Pemimpi");

	//komik data
	strcpy_s(komik[0].kode, "A1");
	strcpy_s(komik[0].judul, "Naruto Shippuden");

	strcpy_s(komik[1].kode, "B1");
	strcpy_s(komik[1].judul, "Detective Conan");

	//ensi data
	strcpy_s(ensi[0].kode, "C1");
	strcpy_s(ensi[0].judul, "Visual Dinosaurus");

	strcpy_s(ensi[1].kode, "E1");
	strcpy_s(ensi[1].judul, "Asal Mula Nama Daerah");

	//majalah data
	strcpy_s(majalah[0].kode, "F1");
	strcpy_s(majalah[0].judul, "Tempo");

	strcpy_s(majalah[1].kode, "Z1");
	strcpy_s(majalah[1].judul, "Bobo");

	int ktg_buku, pilih;

	printf("=========== PERPUSTAKAAN PENS ============");
	printf("\nMENU : \n\n");
	printf("1. Lihat Buku\n");
	printf("2. Tambahkan Buku\n");
	printf("PILIHAN ANDA ADALAH [1/2] ? ");
	scanf("%d", &pilih);

	if (pilih == 1) {
		printf("\nDaftar Kategori");
		printf("\nKode Kategori");
		printf("\n1    Novel");
		printf("\n2    Komik");
		printf("\n3    Ensiklopedi");
		printf("\n4    Majalah");

		printf("\n\nMasukkan kategori buku : ");
		scanf("%d", &ktg_buku);

		switch (ktg_buku) {
		case 1: tampil_buku(novel, ktg_buku); break;
		case 2: tampil_buku(komik, ktg_buku); break;
		case 3: tampil_buku(ensi, ktg_buku); break;
		case 4: tampil_buku(majalah, ktg_buku); break;
		}
	}
	system("pause");
}
*/