#include <bits/stdc++.h>
using namespace std;

void printRowWiseSum (int arr[][3], int rows, int cols) {

    // row sum -> row-wise traversal
    cout << "Printing row-wise sum " << "\n";
    for (size_t i = 0; i < rows; i++)
    {
        int sum = 0;
        for (size_t j = 0; j < cols; j++)
        {
            sum = sum + arr[i][j];
        }
        cout << sum << "\n";
    }
}

bool findKey (int arr[][3], int rows, int cols, int key) {
    for (size_t i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++) 
        {
            if (arr[i][j] == key)
            {
                return true;
            }
        }
    }
    
    // value not found
    return false;
}

int main() {
    /*
    // declare 2D array
    int arr[3][3];

    // initialisation
    int arr2[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9} };

    cout << arr2[2][0] << "\n";

    // row-wise print
    // outer loop
    for (int i=0; i<3; i++) {
        // for every row, we need to print value in each column
        for (size_t j = 0; j < 3; j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "printing column wise " << "\n";

    // column-wise print
    // outer loop
    for (int i=0; i<3; i++) {
        // for every row, we need to print value in each column
        for (size_t j = 0; j < 3; j++)
        {
            cout << arr2[j][i] << " ";
        }
        cout << "\n";
    }
    */

    // int arr3[4][3];
    int rows = 4;
    int cols = 3;

    // Input in a 2D matrix
    
    // // row-wise input
    // for (int i=0; i<rows; i++) {
    //     for (size_t j = 0; j < cols; j++)
    //     {
    //         cin >> arr3[i][j];
    //     }
    // }

    int arr3[4][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}
    };

    cout << "printing row wise" << "\n";
    for (size_t i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++) {
            cout << arr3[i][j] << " ";
        }
        cout << "\n";
    }

    printRowWiseSum(arr3, rows, cols);

    int key = 8;
    cout << findKey(arr3, rows, cols, key);
    
    return 0;
}
