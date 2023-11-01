#include <bits/stdc++.h>
using namespace std;

int main() {
    int s, p, m = 0, ans;
    cin >> s >> p;
    int arr[p];

    for (int i = 0; i < p; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + p);

    m = arr[p - 1] - arr[0];

    for (int i = s; i <= p; i++) {
        ans = arr[i - 1] - arr[i - s];
        ans = abs(ans);
        m = min(m, ans);
    }

    cout << m << endl;

    return 0;
}
