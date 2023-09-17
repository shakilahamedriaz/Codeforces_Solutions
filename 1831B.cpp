#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int t;
  cin >> t;
  while (t--) {
    ll n;
    cin >> n;
    vector<ll> a(n + 1);
    vector<ll> b(n + 1);
    for (ll i = 1; i <= n; i++) {
      cin >> a[i];
    }
    for (ll i = 1; i <= n; i++) {
      cin >> b[i];
    }
    vector<ll> freq_a(n + n + 1);
    vector<ll> freq_b(n + n + 1);
    ll p = 1;
    for (ll i = 2; i <= n; i++) {
      if (a[i] != a[i - 1]) {
        freq_a[a[i - 1]] = max(freq_a[a[i - 1]], i - p);
        p = i;
      }
    }
    freq_a[a[n]] = max(freq_a[a[n]], n - p + 1);
    p = 1;
    for (ll i = 2; i <= n; i++) {
      if (b[i] != b[i - 1]) {
        freq_b[b[i - 1]] = max(freq_b[b[i - 1]], i - p);
        p = i;
      }
    }
    ll ans = 0;
    freq_b[b[n]] = max(freq_b[b[n]], n - p + 1);
    for (ll i = 1; i <= n + n; i++) {
      ans = max(ans, freq_a[i] + freq_b[i]);
    }
    cout << ans << endl;
  }
}
