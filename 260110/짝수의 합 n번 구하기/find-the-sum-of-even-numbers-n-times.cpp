#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a, b, total = 0;
        cin >> a >> b;

        for (int i = a; i <= b; i++)
        {
            if (i % 2 == 0) total += i;
        }
        cout << total << '\n';
    }
    
    return 0;
}