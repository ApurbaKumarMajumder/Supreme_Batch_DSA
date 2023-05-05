#include <bits/stdc++.h>
using namespace std;

int main() {
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


    return 0;
}
