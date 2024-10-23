#include <iostream>
using namespace std;


int main() {
    int base;
    int height;
    int area;

    cout << "Enter base: ";
    cin >> base;
    cout << "Enter height: ";
    cin >> height;

    area = 0.5 * (base * height);

    cout << "Area is: " << area << endl;


    return 0;
}
