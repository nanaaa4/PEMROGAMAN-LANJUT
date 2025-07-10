#include <iostream>
using namespace std;

int main() {
	int number[5] = {7, 5, 6, 12, 35};
	
	cout << "The Numbers are : ";
	
	//printing array element
	//using range based for loop
	
	for (int n : number) {
		cout << n << " ";
	}
	cout << "\nThe Numbers are :";
	
	//printing array element
	//using traditional for loop
	for (int i = 0; i < 6; i++) {
		cout << number[i] << " ";
	}
	return 0;
}