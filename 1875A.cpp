#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

    int t;
    cin >>t;
    while(t--)
    {
        ll a,b,n;
        cin>>a>>b>>n;
        vector<ll>tools(n);
        for(int i=0; i<n; i++)
        {
            cin>>tools[i];
        }
        ll t_sum=0;
        for(int i=0; i<n; i++)
        {
            t_sum+=min(a, tools[i]+1);
            t_sum--;

        }

        cout<< (b + t_sum)<<endl;

    }
    return 0;
}
