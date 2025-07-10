#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i; // Mengembalikan indeks elemen yang ditemukan
        }
    }
    return -1; // Mengembalikan -1 jika elemen tidak ditemukan
}

int main() {
    int arr[] = {10, 23, 45, 70, 11, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 1;

    int result = linearSearch(arr, n, key);

    if (result != -1)
        cout << "Elemen ditemukan pada indeks: " << result << endl;
    else
        cout << "Elemen tidak ditemukan dalam array." << endl;

    return 0;
}
