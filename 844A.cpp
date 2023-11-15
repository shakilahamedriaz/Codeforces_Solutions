#include<bits/stdc++.h>
using namespace std;

int main()

{
    string s;
    cin >>s;
    int k;
    cin >>k;
    int len= s.size();
    
    set<char> stSet;
    if(len < k)
    {
        cout<< "impossible" <<endl;
    }
    else
    {
        for(int i=0; i<len; i++)
        {
            stSet.insert(s[i]);
        }
    
       if(k<stSet.size())
       {
        cout<< "0" <<endl;
       }
       else
       {
        int ans=k-stSet.size();
        cout<<ans<<endl;
       } 
    }



    return 0;
}