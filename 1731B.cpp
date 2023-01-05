#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main(){

int a;
cin>>a;

long long  b =0;
long long m=1e9+7;

while(a>0){

    cin>>b;

    cout<<((((((b*(b+1))%m)*(4*b-1))%m)*337)%m)<<endl;

    a--;
}






return 0;
}
