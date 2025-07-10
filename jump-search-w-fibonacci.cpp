#include <iostream>
#include <vector>
using namespace std;

void generateFibonacci(vector<int>& arr, int n) {
    if (n > 0) arr[0] = 0;
    if (n > 1) arr[1] = 1;
    for (int i = 2; i < n; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
}
          

int searchJump(const vector<int>& arr, int K, int L) {
    int n = arr.size();
    int i = 0;

    while (i < n && arr[i] < K) {
        i += L;
    }

    for (int j = i; j >= 0 && j < n; j--) {
        if (arr[j] == K) {
            return j;
        }
    }

    return -1; 
}


int main() {
    int n, L, K;

    cout << "Masukkan jumlah elemen Fibonacci: ";
    cin >> n;

    vector<int> fibonacci(n);

    generateFibonacci(fibonacci, n);

    cout << "Deret Fibonacci: ";
    for (int num : fibonacci) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Masukkan nilai loncatan L: ";
    cin >> L;

    cout << "Masukkan angka yang ingin dicari: ";
    cin >> K;

    int index = searchJump(fibonacci, K, L);

    if (index != -1) {
        cout << "Target ditemukan pada indeks " << index << endl;
    } else {
        cout << "Target tidak ditemukan" << endl;
    }

    return 0;
}


// while (i < n) {          
//         arr[i] = arr[i - 1] + arr[i - 2]; 
//         i++; };   

// for (i = 0; i < n && arr[i] < K; i += L) {
//     // kode di dalam loop
// }

// int j = i;
// while (j >= 0 && j < n) {
//     if (arr[j] == K) {
//         return j; // Kembalikan indeks jika ditemukan
//     }
//     j--; // Mundur ke elemen sebelumnya
// }
