#include <iostream>
using namespace std;

int main() {
    int arr[10], sum_even = 0, sum_odd = 0;
    
    for(int i = 0; i < 10; i++){
        cin >> arr[i];
        (i % 2) ? sum_odd += arr[i] : sum_even += arr[i];
    }

    (sum_even > sum_odd) ? cout << sum_even - sum_odd : cout << sum_odd - sum_even;
    
    return 0;
}