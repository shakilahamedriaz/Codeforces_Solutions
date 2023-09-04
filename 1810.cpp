#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        int n;
        cin >>n;
        vector<int>arr(n);

        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
        }
        
        bool okmyfrnd=false;
        for(int i=1; i<=n; i++)
        {
            if(arr[i]<=i)
            {
                okmyfrnd=true;
            }
        }

        if(okmyfrnd)
        {
            cout<< "YES" <<endl;
        }
        else
        {
            cout<< "NO" <<endl;
        }
    }
    return 0;
}