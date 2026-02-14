#include <iostream>
using namespace std;

int main() {
    int n, cnt = 1;
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 1; j <= i; j++) cout << "  ";
        for(int j = n - i; j >= 1; j--){
            cout << cnt++ << ' ';
            if(cnt > 9) cnt = 1;
        }
        cout << '\n';
    }

    return 0;
}