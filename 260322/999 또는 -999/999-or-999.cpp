#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int cnt = 0;

    while(true){
        cin >> arr[cnt];

        if(arr[cnt] == 999 || arr[cnt] == -999) break;

        cnt++;
    }

    int max_val = arr[0];
    int min_val = arr[0];

    for(int i = 0; i < cnt; i++){
        if(arr[i] > max_val) max_val = arr[i];
        if(arr[i] < min_val) min_val = arr[i];
    }

    cout << max_val << ' ' << min_val;

    return 0;
}