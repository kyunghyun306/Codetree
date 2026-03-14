#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[10] = {0, };

    cin >> n;

    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        arr[num]++;
    }

    for(int i = 1; i < 10; i++){
        cout << arr[i] << '\n';
    }
    
    return 0;
}