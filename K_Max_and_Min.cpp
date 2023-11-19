#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin >>a>>b>>c;

    int maxno=max(a,max(b,c));
    int minno=min(a,min(b,c));

    cout<<minno<< " "<< maxno<<endl;

    return 0;
}