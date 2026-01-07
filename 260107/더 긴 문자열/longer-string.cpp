#include <iostream>
using namespace std;

int main() {
    string word1, word2;
    cin >> word1 >> word2;

    if(word1.length() > word2.length()) cout << word1 << " " << word1.length();
    else if(word2.length() > word1.length()) cout << word2 << " " << word2.length();
    else cout << "same";
    return 0;
}