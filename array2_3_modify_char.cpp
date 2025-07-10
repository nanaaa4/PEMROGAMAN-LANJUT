#include <iostream>
using namespace std;

int main() {

    char characters[5];

    cout << "Enter 5 characters: ";

    // Taking input for array elements using a loop
    for (int i = 0; i < 5; ++i) {
        cin >> characters[i];
    }

    cout << "\nThe characters are: ";

    // Printing array elements using a traditional for loop
    for (int i = 0; i < 5; ++i) {
        cout << characters[i] << " ";
    }
    
    return 0;
}
