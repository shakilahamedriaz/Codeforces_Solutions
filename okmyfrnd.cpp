#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, q, l, r, k;
        cin >> n >> q;
        vector<ll> arr(n+1);

        for (int i = 1; i<=n; i++)
        {
            cin >> arr[i];
        }
        int ans=0;
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
         ans=0;

        if(ans%2==1) cout<< "YES" <<endl;
        else cout<< "NO" <<endl;




        }


    }

    return 0;
}
