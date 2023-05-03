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

    // int arr[] = {1, 3, 5, 7, 9};
    // int sizeA = 5;
    // int arr2[] = {2, 4, 6, 8};
    // int sizeB = 4;

    // vector<int> ans;

    // // push all element of arr in ans
    // for (int i=0; i<sizeA; i++) {
    //     ans.push_back(arr[i]);
    // } 

    // // push all element of arr2 in ans
    // for (int i=0; i<sizeB; i++) {
    //     ans.push_back(arr2[i]);
    // }

    // // printing ans
    // cout << "Printing ans array " << "\n";
    // for (size_t i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i] << " ";
    // }

    // 3. Intersection of 2 Arrays

    // vector<int> arr{1, 2, 3, 4, 6, 8};
    // vector<int> arr2{3, 49, 10};

    // vector<int> ans;

    // // outer loop on arr vector
    // for (int i=0; i<arr.size(); i++) {
    //     int element = arr[i];
    //     // for every element, run loop on arr2
    //     for (int j=0; j<arr2.size(); j++) {
    //         if (element == arr2[j]) {
    //             // mark the checked element
    //             arr2[j] = INT_MIN;
    //             ans.push_back(element);
    //         }
    //     }
    // }

    // // print ans
    // for (auto value: ans)
    // {
    //     cout << value << " ";
    // }
    // cout << "\n";
    
    // 4. Pair Sum

    // vector<int> arr{10, 20, 30, 40, 50, 60, 70};
    // int sum = 80;

    // // print all pairs
    // // outer loop will traverse for each element
    // // for (size_t i = 0; i < arr.size(); i++)
    // // {
    // //     cout << "We are at element: " << arr[i] << "\n";
    // //     int element = arr[i];

    // //     // for every element, will traverse on aage wale elements
    // //     for (size_t j = i+1; j < arr.size(); j++)
    // //     {
    // //         cout << "pair " << element << " with " << arr[j] << "\n";
    // //         // cout << "(" << element << ", " << arr[j] << ")" << "\n"; 
    // //     }
    // // }
    
    // for (size_t i = 0; i < arr.size(); i++) {
    //     int element = arr[i];

    //     // for every element, will traverse on aage wale elements
    //     for (size_t j = i+1; j < arr.size(); j++)
    //     {
    //         if (element + arr[j] == sum)
    //         {
    //             cout << "Pair Found " << element << "," << arr[j] << "\n";
    //         }
            
    //     }
        
    // }

    // 5. Triplet pair sum

    // vector<int> arr{10, 20, 30, 40, 50};
    // int sum = 80;

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     int element = arr[i];

    //     for (int j=i+1; j<arr.size(); j++) {
    //         int element2 = arr[j];

    //         for (int k=j+1; k<arr.size(); k++) {
    //             int element3 = arr[k];

    //             if (element + element2 + element3 == sum)
    //             {
    //                 cout << element << "," << element2 << "," << element3 << "\n";
    //             }
                
    //         }
    //     }
    // }

    // 6. Sort 0's & 1's

    vector<int> arr{0, 1, 0, 1, 1, 0, 1, 0, 1, 1};
    
    int start = 0;
    int end = arr.size() - 1;
    int i = 0;

    while (i != end)
    {
        if (arr[i] == 0) {
            swap(arr[start], arr[i]);
            start++;
            i++;
        }
        else {
            swap(arr[end], arr[i]);
            end--;
        }
    }

    // print
    for (auto value: arr) {
        cout << value << " ";
    }
    cout << "\n";
    
    return 0;
}