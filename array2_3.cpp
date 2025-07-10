#include <iostream>
using namespace std;

int main(){

    int numbers[5];

    cout << "The Numbers are :";

    //printing array elements
    //using range based for loop
    for (int i = 0; i < 5; ++i) {
        cin >> numbers[i];
    }


    cout << "\nThe Numbers are :";

    //printing array elements
    //using traditional for loop

    for (int i = 0; i < 5; ++i)
    {
        cout << numbers[i] << " ";
    }
    return 0;
}