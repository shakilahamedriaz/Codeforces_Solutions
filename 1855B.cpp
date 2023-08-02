#include<bits/stdc++.h>
using namespace std;

void solve(long long n)
{       long long cnt=0;

    for(int i=1;i<=100; i++)
    {
        if(n%i==0) cnt++;
        else break;
    }

    cout<<cnt<<endl;
}

int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        long long n;
        cin >> n;
        solve(n);
    }

    return 0;
}