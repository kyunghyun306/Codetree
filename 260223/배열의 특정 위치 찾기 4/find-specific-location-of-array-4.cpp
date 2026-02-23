#include <iostream>
using namespace std;

int main() {
    int arr[10], cnt =0, sum = 0;

    for(int i = 0; i < 10; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < 10; i++){
        if(arr[i] == 0) break;
        else if(!(arr[i] % 2)) {
            sum += arr[i];
            cnt++;
        }
    }

    cout << cnt << ' ' << sum;

    return 0;
}