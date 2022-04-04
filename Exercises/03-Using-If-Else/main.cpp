#include <iostream>
using namespace std;

int main() {
        
	// Exercise 1
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    if(num < 100) {
        cout << "num is less than 100" << endl;
    } else {
        cout << "num is greater than or equal to 100" << endl;
    }

	// Exercise 2
	int number;
    cout << "Enter a number: ";
    cin >> number;
    
    int mod = number % 2;
    
    if(mod == 0) {
        cout << number << " is even";
    } else {
        cout << number << " is odd";
    }
    
    cout << endl;
    
    return 0;
}
