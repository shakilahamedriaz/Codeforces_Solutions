#include <bits/stdc++.h>
using namespace std;

int main(){

    long t;
    cin>>t;
    while(t--){
        long n; 
        cin>>n;
        
        long mx=0, ans=0;
        for(long i = 1; i<= n; i++){
            long x; cin>>x;
            if(x > mx) {mx = x; ans = i;}
        }
        cout<<ans<<endl;
        
    }
    return 0;

}