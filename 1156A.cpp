#include<bits/stdc++.h>
using namespace std;

int shakil(int a[], int n) {
    if (is_sorted(a, a + n)) {
        return 0;
    }
    int k = -1;
    for (int i = n - 1; i >= 1; i--) {
        if (a[i] >= a[i - 1])
            continue;
        else {
            k = i;
            break;
        }
    }
    int ans = *max_element(a, a + k);
    return ans;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << shakil(a, n) << endl;
    }
    return 0;
}
