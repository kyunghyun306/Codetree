#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    int n1_arr[100], n2_arr[100];
    string result = "No";
    bool is_match;

    cin >> n1 >> n2;

    for(int i = 0; i < n1; i++){
        cin >> n1_arr[i];
    }

    for(int i = 0; i < n2; i++){
        cin >> n2_arr[i];
    }

    for(int i = 0; i < n1; i++){
        if(n1_arr[i] == n2_arr[0]){
            is_match = true;
            for(int j = 0; j < n2; j++){
                if(n1_arr[i+j] != n2_arr[j]){
                    is_match = false;
                    break;
                }
            }
            if(is_match){
                result = "Yes";
                break;
            }
        }
    }

    cout << result;
    
    return 0;
}