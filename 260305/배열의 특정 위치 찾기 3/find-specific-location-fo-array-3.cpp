#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int cnt = 0;

    while(cnt < 100){
        cin >> arr[cnt];
        if(arr[cnt] == 0){
            cout << arr[cnt - 1] + arr[cnt - 2] + arr[cnt - 3] << ' ';
            break;
        }
        cnt++;
    }

    return 0;
}