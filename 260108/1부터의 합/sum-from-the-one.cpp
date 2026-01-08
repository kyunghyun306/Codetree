#include <iostream>
using namespace std;

int main() {
    int n, val = 0;
    cin >> n;

    for(int i = 1; i <= 100; i++){
        val += i;
        if(val >= n){
            cout << i;
            break;
        }
    }
    return 0;
}