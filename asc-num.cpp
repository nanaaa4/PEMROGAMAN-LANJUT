#include <iostream>
using namespace std;

// Fungsi rekursif untuk angka 1 ke 10
void printAscending(int n) {
    if(n<=10){
        cout<<n<<endl;
        printAscending(n+1);
        //return >> kalau misal disini diberi return maka program dibawah return tidak akan berjalan karena menyetop program dibawahnya
    } //kalau misal disini diberi else, maka tidak akan menampilkan descending
    cout<<n<<endl;
    
}


int main() {
    printAscending(1);  // Cetak angka dari 1 hingga 10 secara vertikal
    return 0;
};