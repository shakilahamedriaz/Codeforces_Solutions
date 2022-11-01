#include<bits/stdc++.h>
using namespace std;

int main(){

int a,b,i,x=0,y=0,z=0,p,q;
cin>>a>>b;

for(i=1; i<=6; i++){

    p=a-i;
    if(p<0) p=p*-1;

    q=b-i;
    if(q<0) q=q*-1;

    if(p<q){

        x++;
    }else if(q<p){

       z++;
    }
    else{

        y++;
    }


}
cout<<x<< " "<<y<<" "<<z<<endl;

return 0;
}
