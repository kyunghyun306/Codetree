#include <iostream>
using namespace std;

int main() {
    int cnt = 0;

    while(true){
        int n;
        cin >> n;

        if(!(n % 2)){
            cout << n / 2 << '\n';
            cnt++;
        } 

        if(cnt >= 3) break;
    }

    return 0;
}