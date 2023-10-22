#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,mi=0,cr=0;
    cin >>t;
    while(t--)
    {
       int a,b;
       cin >>a>>b;
       if(a>b){
        mi++;
       }
       else if(a<b)
       {
        cr++;
       }
    }   

    if(mi==cr) cout<< "Friendship is magic!^^"<<endl;
    else if(mi>cr) cout<< "Mishka" <<endl;
    else{
        cout<< "Chris" <<endl;
    }
 
    return 0;
}