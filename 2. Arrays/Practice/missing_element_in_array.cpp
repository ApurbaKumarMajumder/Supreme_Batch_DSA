#include <bits/stdc++.h>
using namespace std;

void findMissing(int *a, int n) {
    // // visited method
    // for (size_t i = 0; i < n; i++){
    //     int index = abs(a[i]);
    //     if (a[index - 1] > 0)
    //     {
    //         a[index - 1] *= -1;
    //     }
    // }
    
    // for (size_t i = 0; i < n; i++)
    // {
    //     cout << a[i] << " ";
    // }
    // cout << "\n";

    // // all positive indexes are missing.
    // for (size_t i = 0; i < n; i++)
    // {
    //     if (a[i] > 0)
    //     {
    //         cout << i+1 << " ";
    //     }
    // }
    // cout << "\n";

    // sorted + swapping method
    int i = 0;
    while (i < n)
    {
        int index = a[i] - 1;
        if (a[i] != a[index])
        {
            swap(a[i], a[index]);
        }
        else {
            ++i;
        }
    }
    for (size_t i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";

    for (size_t i = 0; i < n; i++)
    {
        if (a[i] != i+1)
        {
            cout << i+1 << " ";
        }
    }
    cout << "\n";
}

int main() {
    int n;
    int a[] = {1, 3, 5, 3, 4};
    n = sizeof(a)/sizeof(int);
    findMissing(a, n);
    return 0;
}