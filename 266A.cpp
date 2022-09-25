#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    int a,b=0;
    cin>>a;

    string s;
    cin>>s;


    for(int i=0; i<a; i++)
    {
        if(s[i]==s[i+1])
        {
            b++;
        }
    }

    cout<<b<<endl;
    return 0;
}
