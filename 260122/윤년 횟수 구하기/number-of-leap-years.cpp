#include <iostream>
using namespace std;

int main() {
    int n, leap = 0;
    cin >> n;

    for(int i = 1; i <= n; i++){
        if(!(i % 4) && !(!(i % 100) && (i % 400)))leap++;
    }

    cout << leap;

    return 0;
}