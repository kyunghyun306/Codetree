#include <iostream>
using namespace std;

int main() {
    int n, cnt = 0;
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++) (i % 2) ? cout << ++cnt << ' ' : cout << --cnt << ' ';
        (i % 2) ? cnt += n + 1 : cnt += n - 1;
        cout << '\n';
    }

    return 0;
}