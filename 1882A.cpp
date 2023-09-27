#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,a,x=1;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a;
            if(a==x) x++;
            x++;
        }
        cout<<x-1<<endl;
    }
    return 0;
}