#include <iostream>
using namespace std;

int main() {
    int m;
    cin >> m;

    for(int i = 0; i < m; i++){
        int n, cnt = 0;
        cin >> n;

        while(n != 1){
            (n % 2) ? n = n * 3 + 1 : n /= 2;
            cnt++;
        }

        cout << cnt << '\n';
    }

    return 0;
}