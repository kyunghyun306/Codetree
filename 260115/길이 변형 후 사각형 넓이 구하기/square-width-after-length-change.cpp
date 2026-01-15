#include <iostream>
using namespace std;

int main() {
    int width, height;
    cin >> width >> height;

    width += 8;
    height *= 3;

    cout << width << '\n';
    cout << height << '\n';
    cout << width * height;

    return 0;
}