#include <iostream>
#include <string>
using namespace std;

int main() {
    
    int previousNumber = 0;
    int latestNumber = 1;
    int sum;
    string sequence = "0, 1, ";
    
    while(latestNumber <= 5000) {
        sum = previousNumber + latestNumber;
        sequence += to_string(sum) + ", ";
        previousNumber = latestNumber;
        latestNumber = sum;
    }
    
    cout << sequence << endl;
    
    return 0;
}
