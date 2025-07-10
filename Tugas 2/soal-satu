
#include <iostream>
using namespace std;


const int HARGA_NETFLIX = 39000;
const int HARGA_DISNEY_PLUS = 45000;
const int HARGA_HBO_GO = 40000;

void rekomendasiLayananStreaming(int dana) {
    cout << "Rekomendasi layanan streaming untuk dana Rp. " << dana << ":\n";

    if (dana >= HARGA_NETFLIX + HARGA_DISNEY_PLUS + HARGA_HBO_GO) {
        cout << "- Netflix, Disney+, dan HBO GO\n";
    }   
    if (dana >= HARGA_DISNEY_PLUS + HARGA_HBO_GO) {
        cout << "- Disney+ dan HBO GO\n";
    }
    if (dana >= HARGA_NETFLIX + HARGA_DISNEY_PLUS) {
        cout << "- Netflix dan Disney+\n";
    }
    if (dana >= HARGA_NETFLIX + HARGA_HBO_GO) {
        cout << "- Netflix dan HBO GO\n";
    }

        if (dana < HARGA_NETFLIX + HARGA_HBO_GO) {  

        if (dana >= HARGA_DISNEY_PLUS) {
            cout << "- Disney+\n";
        }
        if (dana >= HARGA_HBO_GO) {
            cout << "- HBO GO\n";
        }
        if (dana >= HARGA_NETFLIX) {
            cout << "- Netflix\n";
        }
    }

    if (dana < HARGA_NETFLIX && dana < HARGA_HBO_GO && dana < HARGA_DISNEY_PLUS) {
        cout << "Maaf, dana Anda tidak cukup untuk berlangganan layanan streaming apa pun.\n";
    }
}

int main() {
    int dana;
    cout << "Masukkan dana yang Anda miliki: Rp. ";
    cin >> dana;

    cout << endl;
    rekomendasiLayananStreaming(dana);

    return 0;
}
