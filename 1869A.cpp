#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        vector<pair<int, int>> operations;
        for (int i = 0; i < n - 1; i++) {
            a[i] ^= a[i + 1];  // XOR adjacent elements to make them equal
            operations.push_back({i + 1, i + 1});
        }
        
        if (a[n - 1] != 0) {
            operations.push_back({n, n});
            a[n - 1] = 0;
        }
        
        cout << operations.size() << endl;
        for (const auto& op : operations) {
            cout << op.first << " " << op.second << endl;
        }
    }
    
    return 0;
}
