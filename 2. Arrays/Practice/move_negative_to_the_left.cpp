#include <bits/stdc++.h>
using namespace std;

void moveAllNegToLeft(int *a, int n) {
    // Dutch National flag Algo.
    int l=0; 
    int h=n-1;
    while (l < h)
    {
        if (a[l] < 0)
        {
            l++;
        }
        else if (a[h] > 0)
        {
            h--;
        }
        else {
            swap(a[l], a[h]);
            l++;
            h--;
        }
    }
}

int main() {
    // int a[] = {1, 2, -3, -10, 4, -5, 6, 10};
    int a[] = {1, -1, -2, -3, -4, 5, 6};
    int n = sizeof(a)/sizeof(int);

    moveAllNegToLeft(a, n);

    for (size_t i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";

    return 0;
}