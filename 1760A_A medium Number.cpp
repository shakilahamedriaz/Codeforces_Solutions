#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){

int t,a,b,c;
cin>>t;

while(t--){

    cin>>a>>b>>c;

  int m=max(a,max(b,c));
  int s=min(a,min(b,c));


  if(a<m && a>s){

    cout<<a<<endl;
  }
    else if(b<m && b>s){

        cout<<b<<endl;
    }

    else{

        cout<<c<<endl;
    }
}




return 0;
}
