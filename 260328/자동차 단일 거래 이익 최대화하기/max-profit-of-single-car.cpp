#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[1000];

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int s = arr[n-1];
    int result = 0;

    for(int i = n - 2; i >= 0; i--){
        if(arr[i] < s){
            if(s - arr[i] > result) result = s - arr[i];
        }else{
            s = arr[i]; 
        } 
    }

    cout << result;

    return 0;
}