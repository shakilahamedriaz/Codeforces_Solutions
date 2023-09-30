#include<bits/stdc++.h>
using namespace std;
#define ll long long

void shakils_sol()
{

    ll a,b;
    cin >>a>>b;
    if(a==0) cout<< 1 <<endl;
    else
    {
        cout<<(a+(2*b))+1<<endl;
    }
}

int main()
{

    int t;
    cin >>t;
    while(t--)
    {
        shakils_sol();
    }

    return 0;
}
