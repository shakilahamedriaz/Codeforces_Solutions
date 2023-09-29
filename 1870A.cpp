#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >>t;
    while(t--)
    {
       ll n,k,x;
       cin >>n>>k>>x;
       if(n<k || x<k-1) cout<<-1<<endl;

       else
       {
         ll a=k-1;
         ll ans= (a*(a+1))/2;
         ll left=n-k;
         if(x!=k) ans+=left*x;
         else ans+=left*(k-1);

         cout<<ans<<endl;
       }
    }

    return 0;
}