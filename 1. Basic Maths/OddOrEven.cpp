#include <iostream>
using namespace std;

// simple aproach
bool checkEven(int n){
    
    if (n % 2 == 0) {
        return true; // its an even no.
    } else {
        return false; // its an odd no.
    }
}

// bitwise operators
bool checkEven2(int n){
    
    if ((n & 1) == 0) {
        return true; // its an even no.
    } else {
        return false; // its an odd no.
    }
}

int main() {
    int n;
    cin >> n;
    bool isEven = checkEven2(n);

    if (isEven) {
        cout << n << " is an Even number. \n";
    } else {
        cout << n << " is an odd number. \n";
    }
}