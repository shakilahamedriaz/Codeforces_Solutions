#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--){

        int n,k;
        cin>>n>>k;

        vector<int>a(n);
        vector<int>choice(k,0);

        for(int i=0; i<n;i++)
        {
            cin>>a[i];
            choice[(i%k)]=max(choice[(i%k)],a[i]);
        }

        long long aa=0;

        for(int i=0; i<k; i++)
        {
            aa+=choice[i];
        }

        cout<<aa<<endl;
    }


    return 0;
}
