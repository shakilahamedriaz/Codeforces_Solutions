#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,cnt=0;
        cin>>a>>b;


        long long int x=a*a + b*b;
        if(x==0)
        {

            cout<<"0\n";

            continue;
        }
        else
        {

            long long int  s=sqrt(x);
            if(s*s == x)
            {
                cout<< "1"<<endl;
            }
            else
            {
                cout<<"2"<<endl;
            }

        }
    }


    return 0;
}
