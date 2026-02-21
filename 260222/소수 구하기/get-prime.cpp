#include <iostream>
using namespace std;

int main() {
    int n;
    bool decimal;
    cin >> n;

    for(int i = 2; i <= n; i++){
        for(int j = 2; j < i; j++){
            if(!(i % j)){
                decimal = false;
                break;
            }
            if(j == i - 1) decimal = true;
        }
        if(decimal) cout << i << ' ';
    }
    
    return 0;
}