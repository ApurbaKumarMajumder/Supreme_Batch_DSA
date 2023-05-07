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

int getMax(int arr[][3], int rows, int cols) {
    int maxi = INT_MIN;
    for (size_t i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] > maxi)
            {
                maxi = arr[i][j];
            }
        }
    }
    return maxi;
}

int getMin(int arr[][3], int rows, int cols) {
    int mini = INT_MAX;
    for (size_t i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] < mini)
            {
                mini = arr[i][j];
            }
        }
    }
    return mini;
}

void transpose(int arr[][3], int rows, int cols, int transpose[][3]) {
    for (size_t i = 0; i < rows; i++)
    {
        for (int j=0; j<cols; j++) {
            // swap(arr[i][j], arr[j][i]);
            transpose[j][i] = arr[i][j];
        }
    }
}

void printArray(int arr[][3], int rows, int cols) {
    for (size_t i = 0; i < rows; i++)
    {
        for (int j=0; j<cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
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

    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int arr3[4][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}
    };

    // cout << "printing row wise" << "\n";
    // for (size_t i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < cols; j++) {
    //         cout << arr3[i][j] << " ";
    //     }
    //     cout << "\n";
    // }

    // printRowWiseSum(arr3, rows, cols);

    // int key = 8;
    // cout << findKey(arr3, rows, cols, key);

    cout << "Starting Transpose " << "\n";
    int ans[3][3]; // transposed 2D array
    printArray(arr, 3, 3);
    transpose(arr, 3, 3, ans);
    cout << "Transpose done " << "\n";
    printArray(ans, 3, 3);
    
    // return 0;
}
