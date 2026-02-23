#include <iostream>
using namespace std;

int main() {
    int n, scores[4], cnt = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        double sum = 0;
        for(int j = 0; j < 4; j++){
            cin >> scores[j];
            sum += scores[j];
        }

        if((sum / 4) >= 60){
            cout << "pass\n";
            cnt++;
        }
        else cout << "fail\n";
    }
        cout << cnt;

    return 0;
}