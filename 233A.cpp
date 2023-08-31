#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;

    if(n%2==1) cout<< "-1"<<endl;
    else
    {

        vector<int>p(n);
        for(int i=0; i<n; i++)
        {
            if(i % 2==0)
            {
                p[i]=i+2;
            }
            else
            {
                p[i]=i;
            }
        }

        for(auto it : p)
        {
            cout<<it<< " ";
        }
    }


    return 0;
}
