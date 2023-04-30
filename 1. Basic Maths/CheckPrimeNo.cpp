#include <iostream>
#include <cmath>
using namespace std;

// simple way
bool checkPrime(int n){
    int i = 2;
    for (i=2; i<n; i++) {
        if (n%i == 0){
            return false;
        }
    }
    return true;
}

// more complex way
// sqrt(n) * n/sqrt(n) = n
bool checkPrime2(int n){
    int i = 2;
    for (i=2; i<=sqrt(n); i++) {
        if (n%i == 0){
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    bool isPrime = checkPrime2(n);

    if (isPrime) {
        cout << "Prime \n";
    } else {
        cout << "Not Prime \n";
    }
}