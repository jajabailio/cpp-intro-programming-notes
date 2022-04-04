#include <iostream>
using namespace std;

int main() {
        
    int age;
    cout << "Enter you age: ";
    cin >> age;
    
    if(age < 5) {
        cout << "You are a baby";
    } else if(age >= 5 && age <= 12) {
        cout << "You are a toddler";
    } else if(age >= 13 && age <= 19) {
        cout << "You are a teenager";
    } else if(age >= 20 && age <= 30) {
        cout << "You are a young adult";
    } else if(age >= 31 && age <= 64) {
        cout << "You are a full adult";
    } else {
        cout << "You are a senior citizen";
    }
    
    cout << endl;
    
    return 0;
}
