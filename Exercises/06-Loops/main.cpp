#include <iostream>
using namespace std;

int main() {
        
    // exercise 1
    int count = 1;
    
    while(count <= 100) {
        cout << count << " ,";
        count++;
    }
    
    cout << endl << endl;
    
    // exercise 2 (with using the same variable)
    do {
        cout << count << " ,";
        count++;
    } while(count <= 200);
    
    cout << endl << endl;
    
    // exercise 3
    for(int counter = 1; counter <= 200; counter++) {
        cout << ++counter << " ,";
    }
    
    
    cout << endl << endl;
    
    //exercise 4
    int num = 1;
    bool isRepeat = true;
    
    while(isRepeat == true) {
        cout << "count is " << num << endl;
        if(num == 20) {
            isRepeat = false;
        }
        
        num++;
    }
    return 0;
}
