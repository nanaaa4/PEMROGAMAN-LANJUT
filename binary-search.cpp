#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int target) {
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2; // Menghindari overflow

        // Periksa elemen tengah
        if (arr[mid] == target) {
            return mid; // Elemen ditemukan
        } else if (arr[mid] < target) {
            left = mid + 1; // Cari di bagian kanan
        } else {
            right = mid - 1; // Cari di bagian kiri
        }
    }

    return -1; // Elemen tidak ditemukan
}

int main() {
    int arr[] = {11, 15, 23, 45, 70}; // Array harus terurut
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 70;

    int result = binarySearch(arr, n, target);

    if (result != -1)
        cout << "Elemen ditemukan pada indeks: " << result << endl;
    else
        cout << "Elemen tidak ditemukan dalam array." << endl;

    return 0;
}
