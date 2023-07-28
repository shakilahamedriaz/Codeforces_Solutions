#include<bits/stdc++.h>
using namespace std;


int ans(int b, int c, int h)
{   
    int ans;
    if(c+h>=b)
    {
        ans= 2*b-1;
    }
    else if(c+h<b)
    {
        ans= (2*(c+h))+1;
    }

    return ans;
}


int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int b, c, h;
        cin >>b >>c >>h;

       int l= ans(b,c,h);
       cout<<l<<endl;
    }

    return 0;
}