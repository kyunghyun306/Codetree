#include <iostream>
using namespace std;

int main() {
    int n;
    int idx = 0;
    int arr[1000];

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }


    while(true){
        int max_val = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] > max_val){
                max_val = arr[i];
                idx = i;
            }
        }
        cout << idx + 1 << ' ';
        
        if(idx == 0) break;

        n = idx;
    }

    return 0;
}