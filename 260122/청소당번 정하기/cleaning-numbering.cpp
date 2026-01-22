#include <iostream>
using namespace std;

int main() {
    int n, room = 0, hall = 0, toilet = 0;
    cin >> n;

    for(int i = 1; i <= n; i++){
        if(!(i % 2) && (i % 3) && (i % 12)) room++;
        else if(!(i % 3) && (i % 12)) hall++;
        else if(!(i % 12)) toilet++;
    }

    cout << room << ' ' << hall << ' ' << toilet;

    return 0;
}