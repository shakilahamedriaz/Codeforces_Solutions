#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while (t--)
    {
        long long n;
        cin >> n;

        vector<long long> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int ans = 0;
        int l = 0, r = n - 1;
        while (l < r)
        {
            ans += (a[r] - a[l]);
            l++;
            r--;
        }
        
        cout << ans << endl;
    }

    return 0;
}
