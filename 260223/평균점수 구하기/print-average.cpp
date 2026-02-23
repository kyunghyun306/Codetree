#include <iostream>
using namespace std;

int main() {
    double scores[8], sum = 0;
    
    for(int i = 0; i < 8; i++){
        cin >> scores[i];
        sum += scores[i];
    }
    
    cout << fixed;
    cout.precision(1);
    cout << sum / 8;

    return 0;
}