#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;

    (!(a % 13) || !(a % 19)) ? cout << "True" : cout << "False";
    
    return 0;
}