#include<bits/stdc++.h>
using namespace std;

int main(){

 string s1;
 cin>>s1;

 int count =0;
 int x=11;

 if(s1.length()<2){

    cout<<0;
    return 0;

 }

 while(x>=10)
 {
     x=0;
     for(int i=0; i<s1.length(); i++){


        x+=(s1[i]-'0');

     }

     s1=to_string(x);
     count++;

 }


cout<<count<<endl;
return 0;
}
