#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main(){

    fast;

int t;
cin>>t;

while(t--){

    int n;
    cin>>n;
    vector<int> a(n);

    for(int i=0; i<n; i++){

        cin>>a[i];
    }

    vector<int> _a=a;

    sort(a.begin(),a.end());

    for(int i=0; i<n; i++){

        if(_a[i]==a[n-1]){

            cout<<(_a[i]-a[n-2])<<" ";
        }
        else{

            cout<<(_a[i]-a[n-1])<< " ";
        }
    }
    cout<<endl;
}


return 0;
}
