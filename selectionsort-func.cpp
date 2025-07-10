#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    // Loop untuk menggerakkan batas dari array yang belum terurut
    for (int i = 0; i < n - 1; i++) {
        // Temukan elemen terkecil di bagian yang belum terurut
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Tukar elemen terkecil dengan elemen di posisi i
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {5, 4, 3, 2, 1, 3, 2, 1, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array sebelum diurutkan: ";
    printArray(arr, n);

    selectionSort(arr, n);

    cout << "Array setelah diurutkan: ";
    printArray(arr, n);

    return 0;
}
