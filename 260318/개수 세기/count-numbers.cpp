#include <iostream>
using namespace std;

int main() {
    int arr[100] = {0, };
    int n, m;

    cin >> n >> m;

    for(int i = 0; i < n; i++){
        int num;
        cin >> num;

        arr[num]++;
    }

    cout << arr[m];

    return 0;
}