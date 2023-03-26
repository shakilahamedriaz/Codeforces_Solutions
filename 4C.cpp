#include<bits/stdc++.h>
#include<string>
#include<map>

using namespace std;
int main(){
   map<string,int>m;
   int n;
   cin>>n;
   string s;
   for(int i=0; i<n; i++){
    cin>>s;
    if(m[s]=0){
        cout<<"OK";
        m[s]++;
        
    }
    else{
        cout<<s<<m[s];
        m[s]++;
    }
   }  





    return 0;
}