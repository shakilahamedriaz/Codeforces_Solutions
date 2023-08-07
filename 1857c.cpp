#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int total_elements = n * (n - 1) / 2;
        vector<int> b(total_elements);

        for (int i = 0; i < total_elements; ++i) {
            cin >> b[i];
        }

        sort(b.begin(), b.end());

        vector<int> a(n);
        a[0] = b[0];

        for (int i = 0; i < n; ++i) {
            a[i] = b[i + (i + 1) / 2];
        }

        for (int i = 0; i < n; ++i) {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
