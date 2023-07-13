#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

void ans(int n)
{
    if(n<=4)  cout<< "Bob"<<endl;

    else cout<< "Alice"<<endl;
}

int main()
{
    faster;
    int t;
    cin >>t;
    while(t--)
    {
        int n;
        cin>>n;

        ans(n);
    }
    return 0;
}