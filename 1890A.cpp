#include <bits/stdc++.h>
using namespace std;

//sr=shakil riyaz
string sr_sol(vector<int>& arr, int n) {
    map<int, int> freq;

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    if (freq.size() == 1) {
        return "Yes";
    } else if (freq.size() >= 3) {
        return "No";
    } else {
        vector<int> newv;
        for (auto it : freq) {
            newv.push_back(it.second);
        }


        int different = abs(newv[0] - newv[1]);

        if (different <= 1) {
            return "Yes";
        } else {
            return "No";
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        cout << sr_sol(arr, n) << endl;
    }
    return 0;
}
