#include <bits/stdc++.h>
using namespace std;

int firstOccurence(vector<int> v, int target) {
    int s = 0;
    int e = v.size() - 1;

    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (v[mid] == target)
        {
            // ans store and then left
            ans = mid;
            e = mid - 1;
        }
        else if (target > v[mid])
        {
            // right me search
            s = mid + 1;
        }
        else if (target < v[mid]) {
            // left search
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
}

int main() {
    vector<int> v{1, 3, 4, 4, 4, 4, 6, 7};
    int target = 4;
    int indexOfFirstOcc = firstOccurence(v, target);

    cout << "ans is " << indexOfFirstOcc << "\n";

    return 0; 
}