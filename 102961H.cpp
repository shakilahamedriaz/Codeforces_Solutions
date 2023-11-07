#include <bits/stdc++.h>
using namespace std;

long long maxSubarraySum(vector<long long>& arr, int n) {
    long long best = arr[0];
    long long sum = arr[0];

    for (int i = 1; i < n; i++) {
        sum = max(arr[i], sum + arr[i]);
        best = max(best, sum);
    }

    return best;
}

int main() {
    int n;
    cin >> n;
    vector<long long> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    long long result = maxSubarraySum(arr, n);
    cout << result << endl;

    return 0;
}
