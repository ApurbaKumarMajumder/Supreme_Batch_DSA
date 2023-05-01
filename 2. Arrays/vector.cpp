#include <bits/stdc++.h>
using namespace std;

int main() {

    // Create vector
    vector<int> arr;

    int ans = (sizeof(arr))/sizeof(int);
    cout << ans << "\n";

    cout << arr.size() << "\n";
    cout << arr.capacity() << "\n";

    // insert
    arr.push_back(5);
    arr.push_back(6);

    // remove / delete
    arr.pop_back();

    // print
    for (size_t i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    vector<int> brr(10, -11);
    cout << "Size of b" << brr.size() << "\n";
    cout << "Capacity of b " << brr.capacity() << "\n";

    for (size_t i = 0; i < brr.size(); i++)
    {
        cout << brr[i] << " ";
    }
    cout << "\n";

    cout << "Printing crr" << "\n";
    vector<int> crr{10, 20, 30, 40, 50};

    for (size_t i = 0; i < crr.size(); i++)
    {
        cout << crr[i] << " ";
    }
    cout << "\n";

    cout << "Vector crr is Empty or not " << crr.empty() << "\n";
    
    vector<int> drr;
    cout << "Vector drr is Empty or not " << drr.empty() << "\n";
    
    return 0;
}