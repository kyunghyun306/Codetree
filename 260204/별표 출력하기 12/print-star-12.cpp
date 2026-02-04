#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n;
    
    if(n == 1) m = 1;
    else if(n % 2) m = n - 1;
    else m = n;

    vector<vector<int>> v(m, vector<int>(n, 0));

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(i == 0 || (j >= i && (j % 2))){
                v[i][j] = 1; 
            }
        }
    }

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(v[i][j] == 1) cout << "* ";
            else cout << "  ";
        }
        cout << '\n';
    }

    return 0;
}