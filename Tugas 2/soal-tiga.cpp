#include <iostream>
using namespace std;
#include <iomanip>

int omset;
double potongan; 
double hasil;

void pajak1 (int omset, double& potongan, double& hasil){
        
        if( omset >= 100000000 ){
            potongan = omset * 0.015;
            cout << fixed << setprecision(2); // biar hasilnya nggak berantakan
            cout << "Anda mendapatkan potongan pajak sebesar 1,5 persen dari omset anda sebesar Rp. " << omset << " yaitu sebesar Rp. " << potongan << endl;
            cout << "\n";
            cout << "Dengan rincian sebagai berikut: " << endl;
            cout << "Potongan pajak: Rp. " << potongan << endl;
            cout << "\n";
            hasil = omset - potongan;
            cout << "Jadi, omset anda setelah dipotong pajak sebesar Rp. " << potongan << " adalah Rp. " << hasil << endl;
        } else {
            cout << "Anda tidak mendapatkan potongan pajak" << endl;
        }
}

void pajak2 (int omset, double& potongan, double& hasil){
        
        if ( omset >= 150000000){
            double pajak = omset * 0.02;
            double beacukai = omset * 0.1;
            double retribusi = omset * 0.04;
            potongan = pajak + beacukai + retribusi;
            cout << fixed << setprecision(2); // biar hasilnya nggak berantakan
            cout << "Anda mendapatkan potongan pajak sebesar 2 persen, potongan cukai 10 persen dan potongan retribusi 4 persen \ndari omset anda sebesar Rp. " 
            << omset << " yaitu sebesar Rp. " << potongan << endl;
            cout << "\n";
            cout << "Dengan rincian sebagai berikut: " << endl;
            cout << "Potongan pajak: Rp. " << pajak << endl;
            cout << "Potongan cukai: Rp. " << beacukai << endl;
            cout << "Potongan retribusi: Rp. " << retribusi << endl;
            cout << "\n";
            hasil = omset - potongan;
            cout << "Jadi, omset anda setelah dipotong pajak sebesar Rp. " << potongan << " adalah Rp. " << hasil << endl;
        } else {
            cout << "Anda tidak mendapatkan potongan pajak" << endl;
        }
}

void pajak3 (int omset, double& potongan, double& hasil){
        
        if ( omset >= 500000000){
            double pajak = omset * 0.05;
            double beacukai = omset * 0.2;
            double retribusi = omset * 0.05;
            double PPN = omset * 0.12;
            potongan = pajak + beacukai + retribusi + PPN;
            cout << fixed << setprecision(2); // biar hasilnya nggak berantakan
            cout << "Anda mendapatkan potongan pajak sebesar 5 persen, potongan cukai 20 persen dan potongan retribusi 5 persen \ndan PPN sebesar 12 persen dari omset anda sebesar Rp. " 
            << omset << " yaitu sebesar Rp. " << potongan << endl;
            cout << "\n";
            cout << "Dengan rincian sebagai berikut: " << endl;
            cout << "Potongan pajak: Rp. " << pajak << endl;
            cout << "Potongan cukai: Rp. " << beacukai << endl;
            cout << "Potongan retribusi: Rp. " << retribusi << endl;
            cout << "PPN: Rp. " << PPN << endl;
            cout << "\n";
            hasil = omset - potongan;
            cout << "Jadi, omset anda setelah dipotong pajak sebesar Rp. " << potongan << " adalah Rp. " << hasil << endl;
        } else {
            cout << "Anda tidak mendapatkan potongan pajak" << endl;
        }
}

int main() {
    
    cout << "Masukkan omset anda: ";
    cin >> omset;
    
    cout << "\n";

    if (omset >= 500000000) {
        pajak3(omset, potongan, hasil);
    } else if (omset >= 150000000) {
        pajak2(omset, potongan, hasil);
    } else {
        pajak1(omset, potongan, hasil);
    }

    return 0;
}