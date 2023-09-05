#include<bits/stdc++.h>
#define ll long long
#define faster ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

void solve()
{
     int n;
     cin>>n;
     string s;
     cin>>s;

     bool ok=true;
     map<char, int>last;
     for(int i=0; i<n; i++)
     {
        if(last.find(s[i])==last.end();){
            last[s[i]]=i;
        }
        else {
            if((i-last[s[i]])%2==1){
                ok=false;
                break;
            } 
            last[s[i]]=i;
        }
     }
     if(ok){
        cout<< "Yes"<<endl;
     }
     else{
        cout<< "No"<<endl;
        
     }
}

int main()
{
    faster;
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}