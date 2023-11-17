#include <bits/stdc++.h>
#define ll long long
 
using namespace std;

int maxSubarraySum(int arr[], int n) {
    int best = INT_MIN;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum = max(arr[i], sum + arr[i]);
        best = max(best, sum);
    }
    return best;
}

ll maxSubArr(vector<ll>& arr, int left, int right) {
    int n = right - left + 1;
    int subArr[n];
    for (int i = 0; i < n; i++) {
        subArr[i] = arr[left + i];
    }

    return maxSubarraySum(subArr, n);
}

void solve() {
    int n;
    cin >> n;
    vector<ll> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    int previous = 0;
    ll answer = LLONG_MIN;
    for (int i = 1; i < n; i++) {
        if ((abs(vec[i]) % 2) == (abs(vec[i - 1]) % 2)) {
            answer = max(answer, maxSubArr(vec, previous, i - 1));
            previous = i;
        }
    }
    answer = max(answer, maxSubArr(vec, previous, n - 1));
    cout << answer << endl;
}

int main() {
    int num;
    cin >> num;
    while (num--) {
        solve();
    }
    return 0;
}
