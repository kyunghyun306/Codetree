#include <iostream>
using namespace std;

int main() {
    int n, cnt;
    cin >> n;
    int matrix[n][n];

    for(int i = 0; i < n; i++){
        cnt = 1;
        if(i % 2 == 0){
            for(int j = 0; j < n; j++)
            {
                matrix[j][i] = cnt++;
            }
        }else{
            for(int j = n - 1; j >= 0; j--)
            {
                matrix[j][i] = cnt++;
            }
        }  
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++) cout << matrix[i][j];
        cout << '\n';
    }

    return 0;
}