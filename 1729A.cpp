#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>>t;
int a,b,c;
while(t--){

   cin>>a>>b>>c;
                          //a and b useable
   int ans1= abs(a-1);    //a theke direct a tee ashbe
   int ans2= abs(b-c)+(c-1);  //b theke c tai (b-c) then c theke 1 e so (c-1)

   if(ans1==ans2){

      cout<<3<<endl;
   }
   else if(ans1 < ans2){

    cout<<1<<endl;

   }else{

   cout<<2<<endl;

   }

}

return 0;
}
