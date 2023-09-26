#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        arr[0] = 7;
        arr[1] = 11;

        for (int i = 2; i < n; i++) {
            arr[i] = arr[i - 1] + 1;
            int take = arr[i - 1] + arr[i - 2];

            while (3 * arr[i] % take == 0) {
                arr[i]++;
            }
        }

        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }

        cout << endl;
    }

    return 0;
}
