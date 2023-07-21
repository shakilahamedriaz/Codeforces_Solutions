#include<bits/stdc++.h>
using namespace std;

void ans()
{
    int n;
        cin >>n;

        int utt =0, a1;
        for(int i=1; i<=n; i++)
        {
            int a, q;
            cin>>a >> q;

            if(a<=10)
            {
                if(q>utt)
                {
                    utt=q;
                    a1=i;
                }
            }
        }
        cout<<a1 <<endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ans();
    }

    return 0;
}