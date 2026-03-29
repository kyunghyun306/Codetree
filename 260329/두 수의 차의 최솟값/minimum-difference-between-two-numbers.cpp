#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    int arr[100];

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int result = INT_MAX;

    for(int i = n - 1; i > 0; i--){
        if(arr[i] - arr[i - 1] < result) result = arr[i] - arr[i - 1];
    }

    cout << result;

    return 0;
}