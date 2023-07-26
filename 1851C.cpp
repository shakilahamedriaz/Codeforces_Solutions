#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i, count1 = 0, count2 = 0;
        cin >> n >> k;
        int c[n];
        for (i = 0; i < n; i++)
            cin >> c[i];
        for (i = 0; i < n; i++) {
            if (c[i] == c[0])
                count1++;
            if (count1 == k)
                break;
        }
        for (i = i + 1; i < n; i++) {
            if (c[i] == c[n - 1])
                count2++;
            if (count2 == k)
                break;
        }
        if (count2 == k || (c[0] == c[n - 1] && count1 == k))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
