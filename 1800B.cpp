#include<bits/stdc++.h>
using namespace std;

void shakil_here()
{
    int n, k;
    cin >>n >>k;
    string s; cin >>s;
    map<char,int>mp1,mp2;
    for(int i=0; i<n; i++)
    {
        if(s[i]>=97) 
        {
            mp1[s[i]]++;
        }
        else
        {
            mp2[s[i]+32]++;
        }
    }

    int count=0;
    for(char i='a'; i<='z'; i++)
    {
        count+=min(mp1[i],mp2[i]);
        int differ= abs(mp1[i]-mp2[i]);
        count+=min(differ/2,k);
        k-=min(k,differ/2);
    }

    cout<<count<<endl;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int tc;
    cin>>tc;
    while(tc--)
    {

    shakil_here();

    }
    return 0;
}