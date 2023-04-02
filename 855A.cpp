#include<bits/stdc++.h>
#include<string>
#include<map>
using namespace std;
int main() 
{
    map<string, bool> m;
    string s;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>s;

        if(m[s]){
            cout<< "YES"<<endl;
        }
        else{
            m[s]=true;
            cout<< "NO"<<endl;
        }
    }
    return 0;
}