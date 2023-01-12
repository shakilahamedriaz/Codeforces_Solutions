#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){

long long t,a,b;
cin>>t;
while(t--){

    cin>>a>>b;

    if(a<b)  a= 2*a;
    else b= 2*b;

    int ans= max(a,b) * max(a,b);

    cout<<ans<<endl;

}

return 0;
}
