#include <iostream>
using namespace std;

int main() {
    int arr[100], index = 0;

    while(true){
        cin >> arr[index];
        if(arr[index] == 0) break;
        index++;
    }

    for(int i = 0; i < index; i++){
        (arr[i] % 2) ? arr[i] += 3 : arr[i] /= 2;

        cout << arr[i] << ' ';
    }

    return 0;
}