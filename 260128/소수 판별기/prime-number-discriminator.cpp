#include <iostream>
using namespace std;

int main() {
    int n;
    char result = 'P';
    cin >> n;

    for(int i = 2; i < n; i++){
        if(!(n % i)){
            result = 'C';
            break;
        }
    }

    cout << result;
    
    return 0;
}