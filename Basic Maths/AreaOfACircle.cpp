#include <iostream>
using namespace std;

float circle_area(float r) {
    float area = 3.14 * r * r;
    return area;
}

int main() {
    float radius;
    cin >> radius;
    float area = circle_area(radius);
    cout << "Area of Circle is: " << area << endl;
}