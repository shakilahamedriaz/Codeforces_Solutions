#include<bits/stdc++.h>
using namespace std;

void ans()
{
    string s;
    cin >>s;
    int n;
    n=s.size();

    string m = "";
    for(int i=1; i<=100; i++)
    {
        m=m+"Yes";
    }
    bool ok=false;

    for(int i=0; i<m.size(); i++)
    {
        if(i+n-1<m.size() && m.substr(i,n)==s)
        {
            ok=true;
            break;
        }
    }

    if(ok)
    {
        cout<< "YES" <<endl;
    }
    else{

        cout<< "NO" <<endl;
    }
  
}

int main()
{
    int t;
    cin >>t; 
    while(t--)
    {
        ans();
    }
    return 0;
}