#include <iostream>
using namespace std;

int main() {
    int arr[10], cnt = 0, index = 0;

    while(cnt < 2){
        if(index == 0){
            cin >> arr[index];
        }else{
            arr[index] = arr[0] * (index + 1);
        }
        if(!(arr[index] % 5)) cnt++;
        cout << arr[index++] << ' ';
    }

    return 0;
}