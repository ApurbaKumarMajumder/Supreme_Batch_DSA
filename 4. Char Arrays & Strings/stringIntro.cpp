#include <bits/stdc++.h>
using namespace std;

bool compareString(string a, string b) {
    if (a.length() != b.length())
    {
        return false;
    }
    else
    {
        int j = 0;
        for (size_t i = 0; i < a.length(); i++)
        {
            if (a[i] != b[j])
            {
                return false;
            }
            j++;
        }
        return true;
    }
}

int main() {
    // string create
    string str;
    // input
    cin >> str;
    // getline(cin, str);
    // cout << str;

    cout << "length: " << str.length() << endl;
    cout << "isEmpty: " << str.empty() << endl;
    str.push_back('A');
    cout << str << endl;
    str.pop_back();
    cout << str;
    cout << str.substr(0, 6) << endl;

    string a = "Love";
    string b = "Lover";

    if (a.compare(b) == 0)
    {
        cout << "a and b are exactly same strings " << endl;
    }
    else {
        cout << "a and b are not same " << endl;
    }
    
    return 0;
}