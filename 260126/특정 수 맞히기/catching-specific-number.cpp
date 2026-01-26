#include <iostream>
using namespace std;

int main() {
    while(true){
        int n;
        cin >> n;

        if(n == 25){
            cout << "Good\n";
            break;
        }

        (n > 25) ? cout << "Lower\n" : cout << "Higher\n";
    }

    return 0;
}