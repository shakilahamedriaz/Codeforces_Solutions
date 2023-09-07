#include <bits/stdc++.h>
using namespace std;

#define II long long
const int INF = 1e9;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int d[n], s[n], res = INF;

        for (int i = 0; i < n; i++) {
            cin >> d[i] >> s[i];
        }

        for (int i = 0; i < n; i++) {
            if (s[i] >= 3) {
                if (s[i] % 2 == 1)
                    res = min(res, d[i] + (s[i] / 2));
                else
                    res = min(res, d[i] + (s[i] / 2 - 1));
            } else {
                res = min(res, d[i]);
            }
        }

        cout << res << endl;
    }

    return 0;
}
