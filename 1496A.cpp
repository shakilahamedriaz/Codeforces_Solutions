#include<bits/stdc++.h>
using namespace std;
#define ll long long

void sr_sol()
{
    int n,k;
    cin >>n >>k;

    string s;
    cin >>s;

    if(2*k >=n)
    {
        cout<< "NO"<<endl;
        return ;
    }
    else
    {
        for(int i=0; i<k; i++)
        {
            if(s[i]==s[n-1-i])
            continue;
            
            else{
                cout<< "NO" <<endl;
                return; 
            }
        }

        cout<< "YES"<<endl;
    }
}

int main()
{
    int t;
    cin >>t;
    while(t--)
    {

        sr_sol();
    }
    
    return 0;
}
