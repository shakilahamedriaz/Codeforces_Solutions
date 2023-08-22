#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int testcase;
    cin >>testcase;
    while(testcase--)
    {
        string s;
        cin >>s;
        int n=s.size();

        if(s=="()") cout<< "NO"<<endl;
        else
        {
            string s1;
            s1.push_back(s[0]);
            s1+=s[1];

            cout<< "YES" <<endl;
            if(s1==")(")
            {
               for(int i=1; i<=n; i++) cout<<"(";
               for(int i=1; i<=n; i++) cout<<")";

            }
            else if(s1=="))" || s1=="((")
            {
                for(int i=1; i<=n; i++)
                cout<< "()";
            }
            else if(s[2]==')')
            {
                for(int i=1; i<=n; i++)
                cout<< "()";
            }
            else
            {
                for(int i=1; i<=n; i++) cout<< "(";
                for(int i=1; i<=n; i++) cout<< ")";
            }

            cout<<endl;
        }

    
    }
    return 0;
}