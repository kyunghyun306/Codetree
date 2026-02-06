#include <iostream>
using namespace std;

int main() {
    int n, cnt = 9;
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << cnt--;
            if(cnt < 1) cnt = 9;
        }
        cout << '\n';
    }

    return 0;
}