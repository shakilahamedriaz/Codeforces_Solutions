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
        int prev=m[s];
        m[s]++;

        if(prev==0){
            cout<< "OK"<<endl;

        }
        else{
            cout<<s<<prev<<endl;
        }
   }  





    return 0;
}