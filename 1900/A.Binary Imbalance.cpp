#include <bits/stdc++.h>

using namespace std;

void sr_sol() {
    int len;
    cin >> len;

    string str;
    cin >> str;

    int zeroes = 0;
    for (int i = 0; i < len; i++) {
        if (str[i] == '0') {
            zeroes++;
        }
    }

    if (zeroes > (len - zeroes)) {
        cout << "YES" << endl;
    } else {
        bool possible = false;

        for (int i = 0; i < len - 1; i++) {
            if (str[i] != str[i + 1]) {
                possible = true;
                break;
            }
        }

        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        sr_sol();
    }

    return 0;
}
