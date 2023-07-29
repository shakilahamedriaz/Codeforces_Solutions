#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (arr[i-1] == i)
            cnt++;
    }
    int d=cnt/2;
    if(cnt%2!=0) d++;

    cout<<d<<endl;
    
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
