#include <iostream>
using namespace std;

int main() {
    int data[] = {5, 4, 3, 2, 1, 3, 2, 1, 2, 1};
    int h = sizeof(data) / sizeof(data[0]);

    for (int i = 0; i < h - 1; i++) {
        // Temukan elemen terkecil di bagian yang belum terurut
        int indeksTerkecil = i;
        for (int j = i + 1; j < h; j++) {
            if (data[j] < data[indeksTerkecil]) {
                indeksTerkecil = j;
            }
        }
        // Tukar elemen terkecil dengan elemen di posisi i
        int temp = data[indeksTerkecil];
        data[indeksTerkecil] = data[i];
        data[i] = temp;
    }

    for (int i = 0; i < h; i++) {
        cout << data[i] << " ";
    }
    cout << endl;

    return 0;
}