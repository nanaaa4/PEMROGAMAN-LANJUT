#include <iostream>
using namespace std;

int main() {
    // Data yang diberikan
    int data[] = {5, 4, 3, 2, 1, 3, 2, 1, 2, 1};
    int ukuran = sizeof(data) / sizeof(data[0]);

    // Menggunakan loop untuk mengurutkan data dari terkecil ke terbesar
    for (int i = 0; i < ukuran - 1; i++) {
        for (int j = i + 1; j < ukuran; j++) {
            if (data[i] > data[j]) {
                // Tukar posisi data[i] dan data[j]
                int temp = data[i];
                data[i] = data[j];
                data[j] = temp;
            }
        }
    }

    // Cetak data yang sudah diurutkan
    cout << "Data sebelum diurutkan: " << cout data[] << endl;

    cout << "Data setelah diurutkan dari terkecil ke terbesar: ";
    for (int i = 0; i < ukuran; i++) {
        cout << data[i] << " ";
    }
    cout << endl;

return 0;
}