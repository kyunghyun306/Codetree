#include <iostream>
using namespace std;

int main() {
    char c[3];
    int t[3], emg = 0;

    for(int i = 0; i < 3; i++){
        cin >> c[i];
        cin >> t[i];
        if(c[i] == 'Y' && t[i] >= 37) emg++;
    }

    if(emg >= 2) cout << 'E';
    else cout << 'N';

    return 0;
}