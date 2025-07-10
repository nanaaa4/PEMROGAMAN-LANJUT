#include <iostream>
using namespace std;

// Fungsi rekursif untuk angka 1 ke 10
void printAscending(int n) {
    if (n > 10) return; // Basis rekursif untuk menghentikan fungsi saat mencapai 10
    cout << n << endl;
    printAscending(n + 1); // Panggilan rekursif untuk angka berikutnya
}

// Fungsi rekursif untuk 10 ke 1
void printDescending(int n) {
    if (n < 1) return; // Basis rekursif untuk menghentikan fungsi saat mencapai 1
    cout << n << endl;
    printDescending(n - 1); // Panggilan rekursif untuk angka sebelumnya
}

int main() {
    printAscending(1);  // Cetak angka dari 1 hingga 10 secara vertikal
    printDescending(10); // Cetak angka dari 10 hingga 1 secara vertikal
    return 0;
}