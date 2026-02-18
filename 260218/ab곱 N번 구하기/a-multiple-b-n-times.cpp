#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int a, b, mul = 1;
        cin >> a >> b;
        for(int j = a; j <= b; j++) mul *= j;
        cout << mul << '\n';
    }
    
	return 0;
}