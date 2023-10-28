#include<bits/stdc++.h>
using namespace std;

int sr_sol(int n, vector<int>&arr)
{
    if(n==1) return 1;
    int maxi=0;

    for(int i=0; i<n; i++)
    {   int cnt=0;
        for(int j=0; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                cnt ++;
            }
        }
        maxi=max(maxi, cnt);
        cnt=0;
    }
    return maxi;

}
int main()
{
    int n;
    cin >>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++)
    {
        cin >>arr[i];
    }
    
    int ans=sr_sol(n, arr);
    cout<<ans<<endl;

    return 0;
}
