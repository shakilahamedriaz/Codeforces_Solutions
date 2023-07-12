#include<bits/stdc++.h>
using namespace std;

void printans(int x, int k)
{
    if(x<k || x%k != 0)
    {
        cout<<1<<endl;
        cout<<x<<endl;

        continue ;
    }

    cout<<2<<endl;
    cout<<1<< " "<<x-1<<endl;
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int x , k;
        cin >>x >> k;
        
        printans(x,k);
    }

    return 0;
}