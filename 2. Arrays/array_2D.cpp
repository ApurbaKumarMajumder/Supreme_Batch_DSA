#include <bits/stdc++.h>
using namespace std;

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

    int arr3[4][3];
    int rows = 4;
    int cols = 3;

    // Input in a 2D matrix
    
    // row-wise input
    for (int i=0; i<rows; i++) {
        for (size_t j = 0; j < cols; j++)
        {
            cin >> arr3[i][j];
        }
    }

    cout << "printing row wise" << "\n";
    for (size_t i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++) {
            cout << arr3[i][j] << "\n";
        }
    }
    
    return 0;
}
