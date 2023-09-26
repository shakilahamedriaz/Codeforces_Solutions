#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int t;
    cin >> t;
     for(int i=0; i<t; i++)
     {

        ll n, k, x;
        cin >> n >> k >> x;

        ll a=k*(k+1)/2;
        ll b=(n-k+1+n) *k/2 ;

        if(a > x || b < x) cout<< "NO"<<endl;
        else cout<<  "YES"<<endl;

    }

    return 0;
}
