#include <iostream>
using namespace std;

int main() {
    int pp, p;
    cin >> pp >> p;

    cout << pp << ' ' << p;

    for(int i = 0; i < 8; i++){
        int temp = pp + p;
        if(temp >= 10) temp %= 10;
        cout << ' ' << temp;
        pp = p;
        p = temp;
    }

    return 0;
}