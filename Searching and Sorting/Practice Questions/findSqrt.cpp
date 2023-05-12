#include <bits/stdc++.h>
using namespace std;

int findSqrt(int n) {
    int target = n;
    int s = 0;
    int e = n;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (mid * mid == target)
        {
            return mid;
        }
        if (mid * mid > target)
        {
            // left search
            e = mid - 1;
        }
        else {
            // ans store
            ans = mid;
            // right search
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter the number " << "\n";
    cin >> n;

    double ans = findSqrt(n);
    cout << "Ans is " << ans << "\n";

    int precision;
    cout << "Enter the number of floating digits in precison " << "\n";
    cin >> precision;

    double step = 0.1;
    double finalAns = ans;
    for (size_t i = 0; i < precision; i++)
    {
        for (double j = finalAns; j*j <= n; j = j + step) {
            finalAns = j;
        }
        step = step / 10;
    }
    
    cout << "Final ans is. " << finalAns << "\n";
    
    return 0;
}