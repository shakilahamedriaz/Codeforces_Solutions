#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--)
    {
        int n, q, l, r, k;
        cin >> n >> q;
        vector<ll> arr(n+1);
 
        for (int i = 1; i<=n; i++)
        {
            cin >> arr[i];
        }
        long long ans=0;
        while (q--)
        {
            vector<ll>copy_vector(arr);
            cin >> l >> r >> k;
 
            for(int i=l; i<=r; i++)
            {
                copy_vector[i]=k;
            }
 
         for(int i=1; i<=n; i++)
         {
            ans+=copy_vector[i];
         }
        
        if(ans%2==1) cout<< "YES" <<endl;
        else cout<< "NO" <<endl;
       
 
         ans=0;
 
        }
 
 
    }
 
    return 0;
}