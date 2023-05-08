#include <bits/stdc++.h>
using namespace std;

int main() {
    // vector of vectors
    // vector<vector<int> > arr;

    // vector<int> a{1, 2, 3};
    // vector<int> b{4, 5, 6};
    // vector<int> c{7, 8, 9};

    // arr.push_back(a);
    // arr.push_back(b);
    // arr.push_back(c);

    // for (size_t i = 0; i < arr.size(); i++)
    // {
    //     for (int j=0; j<arr[i].size(); j++) {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << "\n";
    // }

    // initialize this way too
    int rows = 3;
    int cols = 5;

    vector<vector<int> > arr(rows, vector<int>(cols, 11));

    for (size_t i = 0; i < arr.size(); i++) {
        for (int j=0; j<arr[i].size(); j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    rows = 5;
    cols = 5;
    
    vector<vector<int>> arr2(rows, vector<int>(cols, -8));

    for (size_t i = 0; i < arr2.size(); i++) {
        for (int j=0; j<arr2[i].size(); j++) {
            cout << arr2[i][j] << " ";
        }
        cout << "\n";
    }
}