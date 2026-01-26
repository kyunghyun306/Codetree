#include <iostream>
using namespace std;

int main() {
    while(true){
        int n;
        cin >> n;

        if(n > 4){
            cout << "Vacancy";
            break;
        }

        if(n == 1) cout << "John\n";
        else if(n == 2) cout << "Tom\n";
        else if(n == 3) cout << "Paul\n";
        else cout << "Sam\n";
    }

    return 0;
}