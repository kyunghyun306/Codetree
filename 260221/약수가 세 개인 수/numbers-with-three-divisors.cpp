#include <iostream>

using namespace std;

int st, ed;

int main() {
    cin >> st >> ed;

    int answer = 0;

    for(int i = st; i <= ed; i++){
        int cnt = 0;
        for(int j = 1; j <= i; j++){
            if(!(i % j)) cnt++;
        }
        if(cnt == 3) answer++;
    }

    cout << answer;

    return 0;
}

