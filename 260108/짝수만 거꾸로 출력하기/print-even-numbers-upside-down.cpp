#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    reverse(arr, arr + n);

    for(int num : arr){
        if(num % 2 == 0) cout << num << " ";
    }
    
    return 0;
}