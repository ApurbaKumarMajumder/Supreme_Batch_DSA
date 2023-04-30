#include <bits/stdc++.h>
using namespace std;

bool find(int arr[], int size, int key) {

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key) {
            return true;
        }
    }

    // not present
    return false;
    
}

int main() {

    // 1. Linear Search
    // int arr[5] = {1, 2, 3, 4, 5};
    // int size = 5;

    // cout << "Enter the key of find " << endl;
    // int key;
    // cin >> key;

    // if (find(arr, size, key)) {
    //     cout << "Found" << "\n";
    // } else {
    //     cout << "Not Found" << "\n";
    // }

    // 2. Zero's and Ones
    // int arr[] = {0, 1, 1, 1, 0, 0, 0, 0, 1, 0, 1, 0, 1, 1, 0, 0, 1};
    // int size = sizeof(arr)/sizeof(int);
    // cout << "size of arr " << size << "\n";

    // int numZero = 0, numOne = 0;

    // for (size_t i = 0; i < size; i++)
    // {
    //     // if zero found, increment numZero
    //     if (arr[i] == 0) {
    //         numZero++;
    //     }

    //     // if one found, increment numOne
    //     if (arr[i] == 1) {
    //         numOne++;
    //     }
    // }
    
    // cout << "number of zeroes " << numZero << "\n";
    // cout << "number of Ones " << numOne << "\n";

    // 3. Find Max and Min element from the array
    // int arr[] = {2, 4, 6, 1, 3, 7, 9, 12, 56, 43, 21};
    // int size = sizeof(arr)/sizeof(int);

    // // initialse the maxi variable with the
    // // minimum possible integer value
    // int maxi = INT_MIN;
    // int mini = INT_MAX;

    // for (int i=0; i<size; i++) {
    //     if (arr[i] > maxi) {
    //         // found a number greater than maxi, update maxi
    //         maxi = arr[i];
    //     }

    //     if (arr[i] < mini){
    //         // found a number lesser than mini, update mini
    //         mini = arr[i];
    //     }
    // }

    // cout << "maximum number is " << maxi << "\n";
    // cout << "minimum number is " << mini << "\n";

    // 4. Extreme Print in Array
    // I/P: {1, 2, 3, 4, 5, 6, 7, 8}
    // O/P: {1, 8, 2, 7, 3, 6, 4, 5}

    // int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    // int size = 8;

    // int start = 0;
    // int end = size - 1;

    // while(true) {
    //     if (start > end)
    //         break;
        
    //     // check for odd size
    //     if (start == end) {
    //         cout << arr[start] << " ";
    //     } else {
    //         cout << arr[start] << " ";
    //         cout << arr[end] << " ";
    //     }

    //     start++;
    //     end--;
    // }

    // 

    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = 8;

    int start = 0;
    int end = size - 1;

    while (start <= end) {

        // step 1
        swap(arr[start], arr[end]);
        // step 2
        start++;
        end--;
    }

    // printing array
    for (int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
}