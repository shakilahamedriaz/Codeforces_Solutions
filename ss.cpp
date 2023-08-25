#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;  cin>>n;

        vector<int>v(n),ans;
        int count=1;

        for(int i=0; i<n; i++) cin>>v[i];
        ans.push_back(v[0]);
        for(int i=1; i<n; i++){
            if(v[i]>=v[i-1]){
                ans.push_back(v[i]);
                count++;
            }
            else{
                ans.push_back(v[i]);
                ans.push_back(v[i]);
                count+=2;
            }
        }
        cout<<count<<endl;
        for(int i=0; i<ans.size(); i++) cout<<ans[i]<<" ";
        cout<<endl;
}

int main(){
    int t,n; cin>>t;
    while(t--){
        solve();
    }
}
