#include<bits/stdc++.h>
using namespace std;
int main(){

int n,c=2;   //c(2); or use this way.
cin>>n;
cout<<c;

for(int i=2; i<n; i++)
{

     c+=i;
     if(c>n){

        c-=n; //c=c-10;
     }


     cout<<" "<<c;


}
cout<<endl;


return 0;
}
