#include <iostream>
using namespace std;

int main() {
    int n, q;
    int arr[100];

    cin >> n >> q;

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for (int i = 0; i < q; i++){
        int q, n1, n2;
        cin >> q;

        if (q == 1){
            cin >> n1;
        
            cout << arr[n1 - 1] << '\n';
        }else if (q == 2){
            int idx = 0;
        
            cin >> n1;
            for (int i = 0; i < n; i++)
            {
                if (arr[i] == n1){
                    idx = i + 1;
                    break;
                }
            }

            cout << idx << '\n';
        }else{
            cin >> n1 >> n2;

            for (int i = n1 - 1; i < n2; i++){
                cout << arr[i] << ' ';
            }
            cout << '\n';
        }
    }

    return 0;
}