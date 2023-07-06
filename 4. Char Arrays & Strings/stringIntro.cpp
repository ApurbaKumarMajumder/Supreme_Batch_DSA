#include <bits/stdc++.h>
using namespace std;

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

}