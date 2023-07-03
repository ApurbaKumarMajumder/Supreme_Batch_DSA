#include <bits/stdc++.h>
using namespace std;

int binarySearch (int arr[], int size, int target) {
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        int element = arr[mid];

        if (element == target)
        {
            return mid;
        }
        else if (target < element)
        {
            // search in left
            end = mid - 1;
        }
        else
        {
            // search in right
            start = mid + 1;
        }
        
        mid = start + (end - start) / 2;
    }

    // element not found
    return -1;
}

int main() {
    int n;
    cout << "Enter the number " << endl;
    cin >> n;

    int ans = findSqrt(n);
    cout << "Ans is " << ans << endl;
    int precision;
    cout << "Enter the number of floating digits in precision " << endl;

    return 0;
}