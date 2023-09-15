#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        string s,t;
        cin >>s>>t;

        bool ok=possible(s,t);

        if(!ok){
            swap(s,t);
            ok=possible(s,t);
        }
        if(!ok)
        {
            cout<< "NO"<<endl;
        }
        else {
            cout<< "YES"<<endl;
        }
    }
}