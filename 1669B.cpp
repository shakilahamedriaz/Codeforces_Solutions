#include <bits/stdc++.h>
using namespace std;

void sr_sol(int n) {
    int arr[n];
    map<int, int> mpcnt;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        mpcnt[arr[i]]++;
    }
    
    int k = -1; 
    bool find = false;
    for (auto it : mpcnt) {
        if (it.second >= 3) {
            find = true;
            k = it.first;
        }
    }

    if (find == true) {
        cout << k << endl;
    } else {
        cout << "-1" << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        sr_sol(n);
    }

    return 0;
}
