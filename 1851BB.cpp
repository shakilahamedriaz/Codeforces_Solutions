#include<bits/stdc++.h>
using namespace std;

void shakil()
{
    int n, cnt =0;
    cin >> n;

    int a[n], b[n];

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        b[i]=a[i];
    }

    sort(a, a+n);

    for(int i=0; i<n ; i++)
    {
        if(a[i]%2 != b[i]%2)
        {
            cnt=1;
            break;
        }
    }
    if(cnt==1) cout<< "NO" <<endl;
    else cout<< "YES" <<endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        shakil();
    }

    return 0;
}