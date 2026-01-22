#include <iostream>
using namespace std;

int main() {
    int even = 0;

    for(int i = 0; i < 5; i++){
        int num;
        cin >> num;

        if(!(num % 2)) even++;
    }

    cout << even;
    
    return 0;
}