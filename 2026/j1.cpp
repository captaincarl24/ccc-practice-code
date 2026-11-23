#include <bits/stdc++.h>

using namespace std;

int main() {
    int B,T,P;
    cin >> B >> T >> P;
    int diff = T - P;
    if (diff >= B) {
    cout << "Y ";
    cout << diff - B;
    } else {
    cout << "N";
    }
    return 0;
}
