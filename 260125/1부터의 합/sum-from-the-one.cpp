#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;

    for(int i = 1; i <= 100; i++){
        if(sum + i >= n){
            cout << i;
            break;
        }
        sum += i;
    }

    return 0;
}