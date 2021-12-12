/*
Program  : Program Menu Pop Ice Store
Kelompok : -Siti Hafijah Zahra Siregar
           -Kristi Ayuni
           -Muhamad Hafiz Atsal
*/
#include <iostream>
using namespace std;

//Fungsi
int beli() {
	///Variabel
  	int pilihMenu, qty;
	int harga[5] = {4000, 4500, 5000, 5500, 6000};
	
	//Perulangan
	do{
		//IO
		cout << "===========POP ICE STORE==========" << endl;
		cout << endl;
		cout << "===============Menu===============" << endl;
		cout << "|   [1] Taro          =   4000   |" << endl;
		cout << "|   [2] Mangga        =   4500   |" << endl;
		cout << "|   [3] Jambu         =   5000   |" << endl;
		cout << "|   [4] coklat        =   5500   |" << endl;
		cout << "|   [5] Durian        =   6000   |" << endl;
		cout << endl;
		
		cout << "(masukkan menu makanan berdasarkan nomor)" << endl;
		cout << "Pilih menu         : "; cin >> pilihMenu;
		 
		cout << "Berapa banyak      : "; cin >> qty;
		//Percabangan   
		if(pilihMenu < 1 && pilihMenu > 5){
			cout << "Maaf, menu yang dipilih, tidak ada. Silahkan pilih ulang." << endl;
		}
	}while(pilihMenu < 1 && pilihMenu > 3);
	
	return harga[pilihMenu - 1] * qty;
}

int main(){
	//Percabangan
	char ulang;
	
	//Perulangan
	do{
		//Variabel
		int total = beli(), uang;
	
		cout << "Total belanja anda : Rp." << total << endl;
		
		//Perulangan
		do{
			cout << "Uang anda          : Rp."; cin >> uang;
			//Percabangan
			if(uang < total){
				cout << "Uang anda kurang." << endl;
			}
		}while(uang < total);
	
		cout << "Kembalian          : Rp." << uang - total << endl;
		cout << "Terima kasih telah berbelanja. Ingin belanja lagi? (y/n): "; cin >> ulang;
		//Percabangan
		if(ulang == 'y'){
			system("CLS"); //Membersihkan layar
		}
	}while(ulang == 'y');
}
