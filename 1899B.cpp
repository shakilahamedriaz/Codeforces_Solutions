#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> weights(n);
        for (int i = 0; i < n; ++i) {
            cin >> weights[i];
        }

        long long answer = 0;

        for (int i = 1; i * i <= n; ++i) {
            if (n % i == 0) {
                long long maxWeight = *max_element(weights.begin(), weights.begin() + i);
                long long minWeight = *min_element(weights.begin() + n - i, weights.end());
                answer = max(answer, maxWeight - minWeight);

                if (i != n / i) {
                    maxWeight = *max_element(weights.begin(), weights.begin() + n / i);
                    minWeight = *min_element(weights.begin() + i, weights.end());
                    answer = max(answer, maxWeight - minWeight);
                }
            }
        }

        cout << answer << endl;
    }

    return 0;
}
