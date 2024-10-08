#include <iostream>
using namespace std;

int main() {
	string kode_kota;
	
	cout << "Masukan kode kota =";
	cin >> kode_kota;
	
	int kode;
	if (kode_kota == "35.01") {
		kode = 1;
	} else 
	if (kode_kota == "35.02") {
		kode = 2;
	} else 
	if (kode_kota == "35.03") {
		kode = 3;
	} else 
	if (kode_kota == "35.04") {
		kode = 4;
	} else 
	if (kode_kota == "35.05") {
		kode = 5;
	} else
	if (kode_kota == "35.06") {
		kode = 6;
	}  else
	if (kode_kota == "35.07") {
		kode = 7;
	} else 
	if (kode_kota == "35.08") {
		kode = 8;
	} else 
	if (kode_kota == "35.09") {
		kode = 9;
	} else 
	if (kode_kota == "35.10") {
		kode = 10;
	} else 
	if (kode_kota == "35.11") {
		kode = 11;
	} 
	else {
		kode = 0;
	}
	
	switch (kode) {
		case 1 :
			cout << "Kabupaten Pacitan";
			break;
		case 2 :
			cout << "Kabupaten Ponorogo";
			break;
		case 3 :
			cout << "Kabupaten Trenggalek";
			break;
		case 4 :
			cout << "Kabupaten Tulungagung";
			break;
		case 5 :
			cout << "Kabupaten Blitar";
			break;
		case 6 :
			cout << "Kabupaten Kediri";
			break;
		case 7 :
			cout << "Kabupaten Malang";
			break;
		case 8 :
			cout << "Kabupaten Lumajang";
			break;
		case 9 : 
			cout << "Kabupaten Jember";
			break;
		case 10 :
			cout << "Kabupaten Banyuwangi";
			break;
		case 11 :
			cout << "Kabupaten Probolinggo";
			break;
		default:
			cout << "Kota/Kabupaten belum terdaftar";
			break;
	}
	return 0;
}
