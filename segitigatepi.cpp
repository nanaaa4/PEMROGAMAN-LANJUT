#include <iostream>
using namespace std;

int main() {
    int columns = 5;
    int rows = 5;  // Jumlah baris segitiga

    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= i; ++j) {
            // Mencetak bintang hanya di garis tepi
            if (i == rows || j == 1 || j == i || j == columns) {
                cout << "* ";
            } else {
                cout << "  ";  // Mengisi dengan spasi
            }
        }
        cout << endl;
    }
    return 0;
}