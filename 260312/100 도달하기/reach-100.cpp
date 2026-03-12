#include <iostream>
using namespace std;

int main() {
    int arr[15], index = 2;
    
    arr[0] = 1;
    cin >> arr[1];

    while(arr[index - 1] <= 100){
        arr[index] = arr[index - 2] + arr[index - 1];
        index++;
    }

    for(int i = 0; i < index; i++){
        cout << arr[i] << ' ';
    }

    return 0;
}