// Leetcode Q No. 2469
#include <bits/stdc++.h>
using namespace std;

void print(std::vector<int> const &input)
{
    for (int i = 0; i < input.size(); i++) {
        std::cout << input.at(i) << ' ';
    }
}

vector<double> convertTemperature(double celcius) {
    double k = celcius + 273.15;
    double f = celcius * 1.8 + 32;

    vector<double> v;
    v.push_back(k);
    v.push_back(f);
    return v;
}

int main() {
    int c;
    cin >> c;

    vector<double> ans = convertTemperature(c);
    print(ans);
    
    return 0;
}