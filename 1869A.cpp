#include<bits/stdc++.h>
using namespace std;
const int MAX = 2e7;

int main() { 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        if(n % 2 == 1) {
            cout << 4 << endl;
            cout << "1 " << n - 1 << endl;
            cout << "1 " << n - 1 << endl;
            cout << n - 1 << " " << n << endl;
            cout << n - 1 << " " << n << endl;
            continue;
        }
        cout << 8 << endl;
        for(int i = 1; i <= 8; i++) {
            cout << "1 " << n << endl;
        }
    }
    return 0;
}
