#include <iostream>
using namespace std;
int main(){
	/* Nama :Bagas Muhammad Shaka
	   NPM  :2117051047
	   Kelas: A 2021*/

	//string//
	string nama;
	string jumlah_pinjaman;
	string lama_pinjaman;
	string suku_bunga_pertahun;
	
	//intro//
	cout << "PINJAMAN BANK" << endl;
	cout << "---------------------" << endl;
	
	//input//
	cout << "Masukkan nama: ";
	getline(cin,nama);
	cout << "Masukkan jumlah pinjaman: ";
	getline(cin,jumlah_pinjaman);
	cout << "Masukkan lama pinjaman: "; 
	getline(cin,lama_pinjaman);
	cout << "Masukkan suku bunga pertahun: ";
	getline(cin,suku_bunga_pertahun);
	cout << "                      " << endl;
	
	//output//
	cout << "Nama " << nama << endl;
	cout << "Jumlah Pinjaman " << jumlah_pinjaman << endl;
	cout << "Lama Pinjaman " << lama_pinjaman << endl;
	cout << "Suku bungan pertahun " << suku_bunga_pertahun << endl;
	
	//penutup//
	cout << "                    " << endl;
	cout << "DIBAYAR SESUAI JADWAL" << endl;
    cout << "JIKA JATUH TEMPO DAN BELUM DIBAYAR MAKA BUNGA NAIK 1% PER-BULAN" << endl;
    cout << "JATUH TEMPO LEBIH DARI 3X JAMINAN JADI MILIK PERUSAHAAAN" << endl;
    cout << "TERIMA KASIH " << endl;
	return 0 ;

}
