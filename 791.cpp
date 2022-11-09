#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,k=0;
    cin>>a>>b;

    if(a>b)
        c=0;
    else
        while(a<b)
        {
            a=a*3;
            b=b*2;
            k++;
        }
    cout<<k<<endl;
    return 0;
}
