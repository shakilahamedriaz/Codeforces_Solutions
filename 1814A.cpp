#include<bits/stdc++.h>
#define ll long long
#define faster ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

void solve()
{
      ll n , k;
      cin>>n >> k;

      if(k%2==0 && n%2!=0) cout<< "No" <<endl;
      else cout<< "Yes" << endl;
}

int main()
{
    faster;
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}