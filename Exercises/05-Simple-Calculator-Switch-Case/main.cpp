#include <iostream>
using namespace std;

int main() {
        
    char choice;
        
    cout << "OPERATIONS: " << endl;
    cout << "a. Addition" << endl;
    cout << "b. Subtraction" << endl;
    cout << "c. Multiplication" << endl;
    cout << "d. Division" << endl;

    cout << "choice: ";
    cin >> choice;
    
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    
    int answer;
    
    switch (choice) {
        case 'a': {
            answer = num1 + num2;
            break;
        }
        case 'b': {
            answer = num1 - num2;
            break;
        }
        case 'c': {
            answer = num1 * num2;
            break;
        }
        case 'd': {
            answer = num1 / num2;
            break;
        }
        default: {
            cout << "Choice was not in the options" << endl;
            answer = 0;
            break;
        }
    }
    
    cout << "answer: " << answer;
    
    return 0;
}
