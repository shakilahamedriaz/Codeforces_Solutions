#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >>s;
    int cnt=0;
    for(int i=0; i<s.size(); i++)
    {
        int dis1=s[i]-s[i+1];
        int dis2=(abs(s[i+2]-'a')+abs('z'-s[i])+1);

        int ok=min(dis1,dis2);
        cnt+=ok;

     s[i]=s[ok];


    }

    cout<<cnt<<endl;

    return 0;
}