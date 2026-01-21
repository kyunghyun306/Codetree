#include <iostream>
using namespace std;

int main() {
    int n, num = 1;
    cin >> n;

    while(num <= n) cout << num++ << ' ';

    return 0;
}