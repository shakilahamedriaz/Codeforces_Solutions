#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
long long a,b,c,n;
while(t--){

    cin>>a>>b>>c>>n;

  long long sum=0;

  sum=a+b+c+n;

  long long x=max(a,b);
            x=max(x,c);



  if(sum%3==0 && sum/3>=x){


    cout<< "YES"<<endl;
  }

    else{

        cout<< "NO"<<endl;
    }


}

return 0;
}
