#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[100];

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int min_val = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] < min_val) min_val = arr[i];
    }

    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == min_val) cnt++;
    }

    cout << min_val << ' ' << cnt;
    
    return 0;
}