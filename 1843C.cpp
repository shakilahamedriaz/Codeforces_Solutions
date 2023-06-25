#include<bits/stdc++.h>
using namespace std;
void shakilhere()
{
    int long long n;
    cin >> n;
    int long long sum=0;
    while(n){

        sum+=n;
        n/=2;
    }
    cout<<sum<<endl;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
     shakilhere();
    }
    return 0;
}