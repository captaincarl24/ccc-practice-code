#include <bits/stdc++.h>

using namespace std;

int main() {
    int S1,S2,S3,S4,S5,D;
    cin >> S1 >> S2 >> S3 >> S4 >> S5 >> D;
    int sum = S1 + S2 + S3 + S4 + S5;
    int big = max({S1, S2, S3, S4, S5});
    int small = min({S1, S2, S3, S4, S5});
    cout << (sum - big - small)*D;
    return 0;
}
