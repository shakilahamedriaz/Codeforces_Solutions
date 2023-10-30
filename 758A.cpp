#include<bits/stdc++.h>
using namespace std;

int sr_sol(int n,vector<int> & arr)
{
       sort(arr.begin(), arr.end());
       int max = arr[n-1];
       int currency=0;
       for(int i=0; i<n; i++)
       {
          currency+=(max-arr[i]);
       }
       return currency;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++)
    {
        cin>> arr[i];
    }
    int ans=sr_sol(n, arr);
    cout<<ans<<endl;

    return 0;
}