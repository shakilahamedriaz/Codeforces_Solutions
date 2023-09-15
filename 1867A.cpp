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
        for(int i=0; i<n; i++)
        {
            cin >>arr[i];
        }

        if(n==1) cout<< "1"<<endl;
        else if(n==2) cout<< "2 1"<<endl;
        else{
            
            for(int i=n; i>=1; i--)
            {
                 cout<<i<< " ";
            }
        }
    }
    return 0;
}