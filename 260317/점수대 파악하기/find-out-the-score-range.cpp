#include <iostream>
using namespace std;

int main() {
    int arr[11] = {0, }, num;

    while(true){
        cin >> num;

        if(num == 0) break;

        arr[num / 10]++;
    }

    for(int i = 10; i > 0; i--){
        cout << i * 10 << " - " << arr[i] << '\n';
    }

    return 0;
}