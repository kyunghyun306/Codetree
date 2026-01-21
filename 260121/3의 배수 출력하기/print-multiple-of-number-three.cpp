#include <iostream>
using namespace std;

int main() {
    int n, num = 3;
    cin >> n;

    while(num <= n){
        cout << num << ' ';
        num += 3;
    }
    
    return 0;
}