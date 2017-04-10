#include <iostream>
#include <conio.h>
using namespace std;

//prototype//
void input();
void pilihanA();
void pilihanB();

//variabel global//
int angka, total, max, min, pilihan;

main () {
	while (pilihan != 3 ){
		cout << "====================\n";
		cout << "MENU\n";
		cout << " 1. Cari nilai terkecil\n";
		cout << " 2. Cari nilai terbesar\n";
		cout << " 3. Exit\n";
		cout << "====================\n";
		cout << "Pilihan Anda : ";
		cin >> pilihan;
		
		if (pilihan == 1 ){
			pilihanA();
			
		} 
		else if (pilihan == 2 ) {
			pilihanB();
		}
	}
}

void pilihanA () {
	int angka, total, max, min;
	cout << "a. Mencari nilai terkecil. (total angka ditentukan)" << endl;
	cout << endl;
	cout << "masukkan total angka: "; cin >> total;
	cout << endl;
	for (int i = 1 ; i <= total; i++) {
		cout << "Masukkan Angka  : ";cin >>angka;
		
		if ( i == 1 ) {
			total ;
			min = angka;
			max = angka;
		}
		else if ( min > angka ) {
			min = angka;
		}
	}
	cout << endl;
	cout << " Nilai Terkecil : " << min << endl;
	cout << " total : " << total << endl;
}

void pilihanB() {
	int angka, total, max, min;
	cout << "b. Mencari nilai terbesar. (total angka ditentukan)" << endl;
	cout << endl;
	cout << "masukkan total angka: "; cin >> total;
	cout << endl;
	for (int i = 1 ; i <= total; i++) {
		cout << "Masukkan Angka  : ";cin >>angka;
		
		if ( i == 1 ) {
			total ;
			min = angka;
			max = angka;
		}
		else if ( max < angka ) {
			max = angka;
		}
	}
	
	cout << endl;
	cout << " Nilai Terbesar  : " << max << endl;
	cout << " total  : " << total << endl;
}	
		
		
		
	
	
