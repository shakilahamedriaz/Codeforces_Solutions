#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool is_possible(ll totalTask, ll p, ll l, ll t, ll mid)
{
    ll ans = min(totalTask, 2 * mid) * t;
    ans += l * mid;
    return ans >= p;
}

void sr_sol()
{
    ll n, p, l, t;
    cin >> n >> p >> l >> t;

    ll totalTask = (n + 6) / 7;

    ll low = 1, high = n;
    ll mid;
    while (low < high)
    {
        mid = (low + high) / 2;
        if (is_possible(totalTask, p, l, t, mid))
        {
            high = mid;
        }
        else
        {
            low = mid + 1;
        }
    }

    cout << n - high << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll tc;
    cin >> tc;

    while (tc--)
    {
        sr_sol();
    }

    return 0;
}
