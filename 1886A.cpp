#include <bits/stdc++.h>
using namespace std;

void accepted(long long n) {
    long long ast = n - 3;
    if (ast % 3 != 0 && ast > 3)
        cout << "YES" << endl << "1 2 " << ast << endl;
    else if (ast - 2 > 4)
        cout << "YES" << endl << "1 4 " << ast - 2 << endl;
    else
        cout << "NO" << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        accepted(n);
    }
    return 0;
}
