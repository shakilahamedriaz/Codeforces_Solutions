#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<ll> arr(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> arr[i];
        }

        vector<ll> pref(n + 1);
        for (int i = 1; i <= n; i++) {
            pref[i] = pref[i - 1] + arr[i];
        }

        while (q--) {
            ll l, r, k;
            cin >> l >> r >> k;

            ll sum = pref[n];
            sum -= (pref[r] - pref[l - 1]); // Corrected prefix sum calculation
            sum += ((r - l + 1) * k); // Corrected variable name j to k

            if (sum % 2 == 1) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
