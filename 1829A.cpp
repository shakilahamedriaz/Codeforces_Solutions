#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    string p="codeforces";
    int cnt=0;
    while(t--)
    {
        string s;
        cin>>s;

       for(int i=0; i<10; i++)
       {
          if(p[i] != s[i])  cnt++;



       }

       cout<<cnt<<endl;
    }



    return 0;
}
