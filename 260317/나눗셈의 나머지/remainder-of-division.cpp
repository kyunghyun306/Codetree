#include <iostream>
using namespace std;

int main() {
    int a, b;
    int arr[10] = {0, };
    int result = 0;

    cin >> a >> b;

    while(a > 1){
        arr[a % b]++;
        a /= b;
    }

    for(int i = 0; i < 10; i++){
        result = result + (arr[i] * arr[i]);
    }

    cout << result;

    return 0;
}