#include <bits/stdc++.h>
using namespace std;

int findUnique(vector<int> arr) {
    int ans = 0;

    for (size_t i = 0; i < arr.size(); i++)
    {
        ans = ans^arr[i];
    }
    
    return ans;
}

int main() {

    // // Create vector
    // vector<int> arr;

    // int ans = (sizeof(arr))/sizeof(int);
    // cout << ans << "\n";

    // cout << arr.size() << "\n";
    // cout << arr.capacity() << "\n";

    // // insert
    // arr.push_back(5);
    // arr.push_back(6);

    // // remove / delete
    // arr.pop_back();

    // // print
    // for (size_t i = 0; i < arr.size(); i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // cout << endl;

    // vector<int> brr(10, -11);
    // cout << "Size of b" << brr.size() << "\n";
    // cout << "Capacity of b " << brr.capacity() << "\n";

    // for (size_t i = 0; i < brr.size(); i++)
    // {
    //     cout << brr[i] << " ";
    // }
    // cout << "\n";

    // cout << "Printing crr" << "\n";
    // vector<int> crr{10, 20, 30, 40, 50};

    // for (size_t i = 0; i < crr.size(); i++)
    // {
    //     cout << crr[i] << " ";
    // }
    // cout << "\n";

    // cout << "Vector crr is Empty or not " << crr.empty() << "\n";
    
    // vector<int> drr;
    // cout << "Vector drr is Empty or not " << drr.empty() << "\n";

    // Questions to practice
    // 1. Unique Element

    // int n;
    // cout << "Enter the size of array " << "\n";
    // cin >> n;

    // vector<int> arr(n);
    // cout << "Enter the element " << "\n";
    // // taking input
    // for (size_t i = 0; i < arr.size(); i++)
    // {
    //     cin >> arr[i];
    // }
    
    // int uniqueElement = findUnique(arr);
    // cout << "Unique Element is " << uniqueElement << "\n";

    // 2. Union of 2 arrays

    int arr[] = {1, 3, 5, 7, 9};
    int sizeA = 5;
    int arr2[] = {2, 4, 6, 8};
    int sizeB = 4;

    vector<int> ans;

    // push all element of arr in ans
    for (int i=0; i<sizeA; i++) {
        ans.push_back(arr[i]);
    } 

    // push all element of arr2 in ans
    for (int i=0; i<sizeB; i++) {
        ans.push_back(arr2[i]);
    }

    // printing ans
    cout << "Printing ans array " << "\n";
    for (size_t i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}