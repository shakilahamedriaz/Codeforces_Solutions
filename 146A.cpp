#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,p,a1=0,a5=0,a10=0,a20=0,a100=0;
  cin>>n;

   if(n>=100){
        a100=n/100;
        n=n%100;
    }
    if(n>=20 && n<100){
        a20=n/20;
        n=n%20;
    }
    if(n>=10 && n<20){
        a10=n/10;
        n=n%10;
    }
    if(n>=5 && n<10){
        a5=n/5;
        n=n%5;
    }
    if(n>=1 && n<5){
        a1=n/1;
    }

    p=a1+a5+a10+a20+a100;

   cout<<p<<endl;

    return 0;
}
