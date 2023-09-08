#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >>n;
    vector<int>v(n+1);
    int sum=0;
    for(int i=0; i<n; i++)
    {
        cin >>v[i];
        sum+=v[i];
    }
    int cnt=sum/4;
    int ans=cnt*4;
    if(sum>ans)
    {
        cout<<cnt+1<<endl;
    }
    else if(sum==ans)
    {
        cout<<cnt<<endl;
    }
    return 0;
}