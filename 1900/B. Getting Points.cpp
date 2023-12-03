#include <bits/stdc++.h>
using namespace std;

void sr_sol(int n, int P, int l, int t) {
    int ans = 0;
    int i = 1;
    while (i <= n) {
        int j = 1;
        while (j <= n) {
            int k = 1;
            while (k <= n) {
                int temp = (i + j + k);
                if (temp == P) {
                    ans++;
                }
                k++;
            }
            j++;
        }
        i++;
    }

    if (ans >= l && ans <= t) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        int n, P, l, t;
        cin >> n >> P >> l >> t;

        sr_sol(n, P, l, t);
    }

    return 0;
}
