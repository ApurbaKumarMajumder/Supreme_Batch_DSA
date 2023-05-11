#include <bits/stdc++.h>
using namespace std;

int binarySearch (int arr[], int size, int target) {

}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 16};
    int size = 7;
    int target = 2;

    int indexOfTarget = binarySearch(arr, size, target);

    if (indexOfTarget == -1)
    {
        cout << "target not found " << "\n";
    }
    else {
        cout << "target found at " << indexOfTarget << "\n";
    }

    return 0;
}