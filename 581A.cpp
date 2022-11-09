#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{

    int a,b,x;
    cin>>a>>b;

    if(a<b){

        cout<<a;
        x=b-a;

    }else{

        cout<<b;
        x=a-b;
    }
    cout<<" ";
    cout<<x/2<<endl;

    return 0;
}
