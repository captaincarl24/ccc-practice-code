#include <bits/stdc++.h>

using namespace std;

int main() {
    cout << "Sun Mon Tue Wed Thr Fri Sat\n";

    int start, days;
    cin >> start >> days;

    int col = start - 1;

    for (int k = 0; k < start - 1; k++) {
        if (k == 0) {
            cout << "   ";
        } else {
            cout << "    ";
        }
    }

    for (int d = 1; d <= days; d++) {
        if (col == 0) {
            cout << setw(3) << d;
        } else {
            cout << setw(4) << d;
        }
        col++;
        if (col == 7) {
            cout << "\n";
            col = 0;
        }
    }

    if (col != 0) {
        cout << "\n";
    }
    return 0;
}
