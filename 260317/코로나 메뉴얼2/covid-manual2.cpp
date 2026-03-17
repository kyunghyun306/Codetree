#include <iostream>
using namespace std;

int main() {
    int arr[4] = {0, };

    for(int i = 0; i < 3; i++){
        char cold;
        int body_temp;

        cin >> cold >> body_temp;

        if(cold == 'Y'){
            (body_temp >= 37) ? arr[0]++ : arr[2]++;
        }else{
            (body_temp >= 37) ? arr[1]++ : arr[3]++;
        }
    }

    for(int i = 0; i < 4; i++){
        cout << arr[i] << ' ';
    }
    
    if(arr[0] >= 2) cout << 'E';

    return 0;
}