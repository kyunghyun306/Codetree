#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[100];
    int n;
    int first_max = INT_MIN;
    int second_max = INT_MIN;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
        
        if(arr[i] > first_max){
            int temp = first_max;

            first_max = arr[i];

            if(temp > second_max) second_max = temp;
            
        }else if(arr[i] > second_max){
            second_max = arr[i];
        }
    }

    cout << first_max << ' ' << second_max;

    return 0;
}