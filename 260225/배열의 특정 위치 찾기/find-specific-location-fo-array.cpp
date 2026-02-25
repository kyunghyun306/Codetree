#include <iostream>
using namespace std;

int main() {
    int arr[11], sum_even = 0, sum_3 = 0, cnt_3 = 0;

    for(int i = 1; i <= 10; i++){
        cin >> arr[i];
        if(!(i % 2)) sum_even += arr[i];
        if(!(i % 3)) {sum_3 += arr[i]; cnt_3++;}
    }

    cout << fixed;
    cout.precision(1);
    cout << sum_even << ' ' << (double)sum_3 / cnt_3;

    return 0;
}