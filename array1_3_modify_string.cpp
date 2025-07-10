#include <iostream>
using namespace std;

int main() {
    string numbers[5] = {"7", "5", "6", "12", "35"};
    
    cout << "The Numbers as Strings are: ";
    
    // Printing array elements using range-based for loop
    for (const string& num : numbers) {
        cout << num << " ";
    }
    cout << "\nThe Numbers as Strings are: ";
    
    // Printing array elements using traditional for loop
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }
    return 0;
}
