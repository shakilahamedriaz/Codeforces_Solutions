#include <bits/stdc++.h>
using namespace std;

void sr_sol(int n, int f,int x, int cnt){
   
    for(int i=1; i<n; i++){
        cin>>x;
        if(f>x){
            
            if(((i-1)&(i))!=0)
            {
              cnt=1;
            } 
        }
        f=x;
    }

    if(cnt)
    { 
    cout<<"NO"<<endl;
    }
    else
    {
     cout<<"YES"<<endl;
    } 
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin>>t; 
    while(t--)
    {
     int n, f,x,cnt=0;
     cin >>n>>f;   
     sr_sol(n, f,x,cnt);

    } 
	return 0;
}