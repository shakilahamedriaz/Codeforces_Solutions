#include<bits/stdc++.h>
using namespace std;
#define ll long long

void sr_sol()
{
    ll n;
    cin >> n;

    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll s = 0, d = 0;
    ll left = 0, right = n - 1; 

    for (ll i = 1; i <= n; i++)
    {
        if (arr[left] > arr[right])
        {
            // Sereja's turn
            if (i % 2 == 1)
            {
                s += arr[left];
            }
            else
            {
                d += arr[left];
            }
            left++;
        }
        else
        {
            // Dima's turn
            if (i % 2 == 1)
            {
                s += arr[right];
            }
            else
            {
                d += arr[right];
            }
            right--;
        }
    }

    cout << s << " " << d << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    sr_sol();

    return 0;
}
