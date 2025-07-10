#include <stdio.h>

// Fungsi untuk menukar dua angka
//fungsi swap digunakan untuk menukar 2 angka
void swap(int *a, int *b) {
    int temp = *a; //menyimpan nilai *a kedalam temp
    *a = *b; //menyimpan nilai *b kedalam *a
    *b = temp; //meyimpan nilai temp ke nilai *b
}

// Fungsi untuk melakukan Bubble Sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

// Fungsi untuk mencetak array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {5, 4, 3, 2, 1, 3, 2, 1, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Array sebelum diurutkan:\n");
    printArray(arr, n);
    
    bubbleSort(arr, n);
    
    printf("Array setelah diurutkan (Ascending):\n");
    printArray(arr, n);
    
    return 0;
}
