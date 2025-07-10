#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

struct BARANG {
    string nama;
    int harga;
};

const int MAX_BARANG = 50;
BARANG arrayBarang[MAX_BARANG];
int jumlahBarang = 0;

void tambahDataBarang() {
    if (jumlahBarang < MAX_BARANG) {
        cout << "Masukkan nama barang: ";
        cin >> arrayBarang[jumlahBarang].nama;

        cout << "Masukkan harga barang: ";
        cin >> arrayBarang[jumlahBarang].harga;

        jumlahBarang++;
        cout << "Selamat! Data barang berhasil ditambahkan.\n";
    } else {
        cout << "Mohon maaf! Array barang penuh.\n";
    }
}

void tampilkanDataBarang() {
    if (jumlahBarang == 0) {
        cout << "Data barang tidak ditemukan !! \n";
    } else {

        cout << "=========================================================================\n";
        cout << setw(20) << left << "Nama Barang" << setw(20) << right << "Harga" << endl;
        cout << "=========================================================================\n";

        for (int i = 0; i < jumlahBarang; ++i) {
            cout << setw(20) << left << arrayBarang[i].nama << setw(20) << right << arrayBarang[i].harga << endl;
        }
    }
}

bool pembandingNama(const BARANG &a, const BARANG &b) {
    return a.nama < b.nama;
}

void urutkanDanTampilkanDataBarang() {
    sort(arrayBarang, arrayBarang + jumlahBarang, pembandingNama);

    cout << "Berikut data barang setelah diurutkan berdasarkan nama:\n";
    tampilkanDataBarang();
}

int cariDataBarang(const string &namaCari) {
    for (int i = 0; i < jumlahBarang; ++i) {
        if (arrayBarang[i].nama == namaCari) {
            return i; 
        }
    }
    return -1; 
}

void resetData() {
    jumlahBarang = 0;
    cout << "Seluruh data barang telah berhasil direset!.\n";
}

int main() {
    int pilihan;

    do {
        cout << "\nPilihan Menu:\n";
        cout << "1. Tambahkan Data Barang\n";
        cout << "2. Tampilkan Data Barang\n";
        cout << "3. Urutkan dan Tampilkan Data Barang Sesuai Nama\n";
        cout << "4. Cari Data Barang\n";
        cout << "5. Reset Seluruh Data Barang\n";
        cout << "6. Exit\n";
        cout << "Pilihlah menu dari (1-6): ";
        cin >> pilihan;
        
         switch (pilihan) {
            case 1:
                tambahDataBarang();
                break;
            case 2:
                tampilkanDataBarang();
                break;
            case 3:
                urutkanDanTampilkanDataBarang();
                break;
            case 4: {
                string namaCari;
                cout << "Masukkan nama barang yang ingin anda cari: ";
                cin >> namaCari;

                int indeks = cariDataBarang(namaCari);
                if (indeks != -1) {
                    cout << "Barang ditemukan pada indeks " << indeks << endl;
                } else {
                    cout << "Mohon maaf! Barang tidak ditemukan.\n";
                }
                break;
            }
            case 5:
                resetData();
                break;
            case 6:
                cout << "Terima kasih, telah menggunakan program ini. Have a nice day!:).\n";
                break;
            default:
                cout << "Pilihan invalid, silahkan pilih menu yang telah tersedia!\n";
                break;
        }
    } while (pilihan != 6);
    
    return 0;
}