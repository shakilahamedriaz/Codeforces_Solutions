#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >>n;
    string s;
    cin>>s;
    int cntA=0,cntD=0;
    
    for(int i=0; i<n; i++)
    {
        if(s[i]=='A')
        {
            cntA++;
        }
        else if(s[i]=='D')
        {
            cntD++;
        }
    }

    if(cntA==cntD)
    {
        cout<< "Friendship" <<endl;
    }
    else if(cntA>cntD)
    {
        cout<< "Anton" <<endl;
    }
    else
    {
        cout<< "Danik" <<endl;
    }

    return 0;
}