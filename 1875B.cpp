#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;

    while (t--) {
        ll n, m, k;
        cin >> n >> m >> k;
        vector<ll> a(n);
        vector<ll> b(m);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < m; i++) {
            cin >> b[i];
        }
        ll sum=0;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        //for even case
        if(k%2==0)
        {
            if(a[0]<b[m-1])
            {
                swap(a[0], b[m-1]);
                sort(a.begin(), a.end());
                sort(b.begin(), b.end());
            }
            if(b[0]<a[n-1])
            {
                swap(a[n-1], b[0]);
                sort(a.begin(), a.end());
                sort(b.begin(), b.end());
            }
        }
        //for odd value
        else
        {
            if(a[0]<b[m-1])
            {
            swap(a[0], b[m-1]);
            sort(a.begin(), a.end());
            sort(b.begin(), b.end());
            }
        }

       
        for(auto it: a)
        {
            sum+=it;
        }

        cout<<sum<<endl;

    }

    return 0;
}
