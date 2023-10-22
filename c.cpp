#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll t; cin >> t;
    for (ll test_case = 1; test_case <= t; test_case++) {
        ll n; cin >> n;
        ll a, b; cin >> a >> b;
        ll arr[n];
        for (ll i = 0; i < n; i++) {
            cin >> arr[i];
        }

        sort(arr, arr + n);
        ll cnt = 0;

        for (ll i = 0; i < n; i++) {
            for (ll j = i + 1; j < n; j++) {
                if ((arr[i] + arr[j] >= a) && (arr[i] + arr[j] <= b)) {
                    cnt++;
                }
            }
        }
        cout << "Case " << test_case << ": " << cnt << endl;
    }
    return 0;
}
