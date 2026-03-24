#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[1000] = {0, };
    int result = -1;

    cin >> n;

    for(int i = 0; i < n; i++){
        int num;
        
        cin >> num;
        arr[num]++;
    }

    for(int i = 999; i >= 1; i--){
        if(arr[i] == 1){
            result = i;
            break;
        }
    }

    cout << result;

    return 0;
}