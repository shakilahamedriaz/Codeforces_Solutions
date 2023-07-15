#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        int n = 4;

        set<char> sc;
        map<char, int> freq;

        for (auto i : s)
        {
            sc.insert(i);
            freq[i]++;
        }

        if (sc.size() == 1)
            cout << -1 << endl;
        else if (sc.size() == 2)
        {
            int ans = 4;
            for (auto [i, ox] : freq)
            {
                if (ox == 1)
                {
                    ans = 6;
                    break;
                }
            }
            cout << ans << endl;
        }
        else if (sc.size() == 3)
            cout << 4 << endl;
        else if (sc.size() == 4)
            cout << 4 << endl;
    }

    return 0;
}
