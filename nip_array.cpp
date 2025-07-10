#include <iostream>
using namespace std;

int main() {
	string nip = "1990041220240610003";
	string tgllahir = nip.substr(0, 8);
	string harilahir = nip.substr(6, 2);
	string bulanlahir = nip.substr(4, 2);
	string tahunlahir = nip.substr(0, 4);
	cout << "\nNIP" << nip;
	cout << "\nTgl Lahir " << tgllahir;
	
	cout << "\nHari Lahir " << harilahir;
	cout << "\nBulan Lahir " << bulanlahir;
	cout << "\nTahun Lahir " << tahunlahir;
	
	return 0;
}