#include<bits/stdc++.h>
using namespace std;
int main()
{

    int A[101],n;
    cin>>n;

    for(int i=0; i<n-1; i++){

        cin>>A[i];
    }
    int a,b;
    cin>>a>>b;
    int ans=0;
    for(int i=a-1; i<b-1; i++){
        ans+=A[i];
    }

    cout<<ans<<endl;


    return 0;
}
