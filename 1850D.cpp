#include<bits/stdc++.h>
using namespace std;

#define ll long long

void balancedAns() {
    ll n, k;
    cin >> n >> k;

    ll arr[n];
    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);

    int p = 0;
    ll ans = 0;
    while (p < n) {
        ll j = p + 1;
        while (j < n) {
            if (arr[j] - arr[j - 1] > k) {
                break;
            }
            j++;
        }
        ll bb = j - p;
        ans = max(ans, bb);
        p = j;
    }
    cout << n - ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        balancedAns();
    }
    return 0;
}
