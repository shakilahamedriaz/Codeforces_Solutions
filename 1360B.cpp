#include<bits/stdc++.h>
using namespace std;

long long ll;

int main()
{


    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> a(n);

        for(int &x : a)
            cin>>x;

        sort(a.begin(),a.end());

        int ans = a[n-1] - a[0];

        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                ans = min(ans,a[j]-a[i]);
            }
        }
        cout<<ans;
        cout<<endl;
    }


    return 0;
}
