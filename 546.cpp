#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,w,c,d,sum=0;
    cin>>k>>n>>w;

    for(int i=1; i<=w; i++)
    {
        c= i*k;

        sum+=c;
    }

    if(sum<=n){
        cout<<0<<endl;
    }
    else{

        cout<< sum-n<<endl;
    }
    return 0;

}
