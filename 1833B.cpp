#include <bits/stdc++.h>
#define ll long long
using namespace std;


void shakil() {
    ll tt = 1;
    cin >> tt;

    while (tt-- > 0) {
        ll n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        if (n < k) {
            cout << "NO\n";
            continue;
        }

        vector<int> charCount(26, 0);

        for (char c : s)
            charCount[c - 'a']++;

        int oddCount = 0;

        for (int i = 0; i < 26; i++)
            oddCount += (charCount[i] % 2);

        oddCount--;

        if (k < oddCount) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    shakil();
    return 0;
}
