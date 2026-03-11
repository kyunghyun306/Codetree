#include <iostream>
using namespace std;

int main() {
    int n, arr[100], cnt = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        if(!(num % 2)) arr[cnt++] = num;
    }

    for(int i = 0; i < cnt; i++){
        cout << arr[i] << ' ';
    }
    
    return 0;
}