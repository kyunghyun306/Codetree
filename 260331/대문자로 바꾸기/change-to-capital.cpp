#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char arr[5][3];

    for(int i = 0; i < 5; i++)
        for(int j = 0; j < 3; j++)
            cin >> arr[i][j];

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 3; j++)
            cout << (char)toupper(arr[i][j]) << ' ';
        cout << '\n';
    }

    return 0;
}