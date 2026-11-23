#include <bits/stdc++.h>

using namespace std;

int main() {
    string word, word2;
    cin >> word >> word2;

    int i = 0, j = 0, a = 0, b = 0;
    while (i < word.size() && j < word2.size()) {
        char x = word[i];
        char y = word2[j];
        if (x==y) {
            i++; j++;
            a++; b++;
        } else if ((x == 'R' && y == 'G') || (x == 'G' && y == 'B') || (x == 'B' && y == 'R')) {
            j++; 
            a++;
        } else {
            i++;
            b++;
        }
        
    }
    a += word.size() - i;
    b += word2.size() - j;
    cout << a << "\n" << b;
    return 0;
}
