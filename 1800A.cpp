#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
       int   n;
       cin >> n;
       string s;
       cin>>s;
       string T= "meow";

       for(int i=0; i<n; i++)
       {
        if(s[i]<=90) s[i]=s[i]+32;
    
       }
       string newstr="";

       for(int i=0; i<n; i++)
       {
        if(newstr.empty() || newstr.back() !=s[i])
        {
            newstr.push_back(s[i]);
        }
       }

       if(newstr==T)  cout<< "YES" << endl;
       else cout<< "NO" << endl;
    }
    return 0;
}