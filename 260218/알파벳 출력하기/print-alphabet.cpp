#include <iostream>
using namespace std;

int main() {
    int n, cnt = 0;
    char x = 'A';
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << (char)(x + cnt++);
            if(cnt > 25) cnt = 0;
        }
        cout << '\n';
    }

    return 0;
}