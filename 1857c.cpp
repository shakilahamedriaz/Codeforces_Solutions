#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, sum, y;
        cin >> n;
        
        int x = (n * (n - 1)) / 2;
        int a[n], b[x];
        y = n - 1;
        sum = y;
        
        for (int i = 0; i < x; i++) {
            cin >> b[i];
        }
        
        sort(b, b + x);
        
        for (int i = 0; i < n - 1; i++) {
            cout << b[sum - 1] << " ";
            y--;
            sum += y;
        }
        
        cout << b[x - 1] << endl;
    }
    
    return 0;
}
