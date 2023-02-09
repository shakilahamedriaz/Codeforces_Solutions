#include <bits/stdc++.h>
using namespace std;

int t, n;
char s[55];
map<char, int> m;

int main() {
    cin >> t;
    while (t--) {
        cin >> n;
        cin >> s;
        m.clear();
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (m[s[i]] == 0) ans++;
            m[s[i]]++;
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
