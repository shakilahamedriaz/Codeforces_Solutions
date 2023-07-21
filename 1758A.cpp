#include<bits/stdc++.h>
using namespace std;

void shakil()
{
    string s;
    cin >> s;
    int n= s.size();
    map<char,int> frq;
    for(auto i:s) frq[i]+=2;

    string L= "", R="";

    for(char c= 'a'; c<= 'z'; c++)
    {
        if(frq[c]==0) continue;
        
        for(int i=1; i<=frq[c]/2; i++)
        {
            L.push_back(c);
        }
        for(int i=1; i<=frq[c]/2; i++)
        {
            R.push_back(c);
        }
    }

    reverse(R.begin(), R.end());
    cout<<L<< R <<endl;
}

int main()
{

    int t;
    cin >> t;
    while(t--)
    {
        shakil();
    }
    return 0;
}