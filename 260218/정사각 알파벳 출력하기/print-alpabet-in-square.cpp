#include <iostream>
using namespace std;

int main() {
    int n, cnt = 0;
    char x = 'A';
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++) cout << (char)(x + cnt++);
        cout << '\n';
    }

    return 0;
}