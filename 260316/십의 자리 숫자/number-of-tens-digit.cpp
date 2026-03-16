#include <iostream>
using namespace std;

int main() {
    int arr[10] = {0, }, num;

    while(true){
        cin >> num;

        if(num == 0) break;

        arr[num / 10]++;
    }

    for(int i = 1; i < 10; i++){
        cout << i << " - " << arr[i] << '\n';
    }

    return 0;
}