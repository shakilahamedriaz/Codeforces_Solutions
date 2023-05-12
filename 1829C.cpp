#include<bits/stdc++.h>
#define ll long long int
#define sz 1000006
#define pa pair<ll, ll>
#define mod 1000000007
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t = 1; cin >> t;
    while(t--) {
        ll a1,b1,c1;
        a1 = b1 = c1 = sz;
        int n; cin >> n;
        for(int i = 0; i < n; i++) {
            ll a; cin >> a;
            string c; cin >> c;
            if(c == "11") a1 = min(a1, a);
            if(c == "10") b1 = min(b1, a);
            if(c == "01") c1 = min(c1, a);
        } a1 = min(a1, b1 + c1);
        if(a1 == sz) a1 = -1;
        cout << a1 << "\n";
    }
}
