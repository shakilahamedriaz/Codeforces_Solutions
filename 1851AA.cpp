#include<bits/stdc++.h>
using namespace std;

// Function to count the elements that satisfy certain conditions
int countElements(vector<int>& arr, int h, int m, int k) {
    int count = 0;
    for (int i = 0; i < arr.size(); i++) {
        int diff = abs(h - arr[i]);
        bool condition1 = diff % k == 0;
        bool condition2 = diff <= (m - 1) * k;
        bool condition3 = diff;
        if (condition1 && condition2 && condition3) {
            count++;
        }
    }
    return count;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m, k, h;
        cin >> n >> m >> k >> h;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        
        int sum = countElements(arr, h, m, k);
        cout << sum << endl;
    }

    return 0;
}
