#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, s;
        cin >> m >> s;
        vector<int> b(m);
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        
        vector<bool> taken(1100, false);
        for (int i = 0; i < m; i++)
        {
            taken[b[i]] = true;
        }

        int mx = *max_element(b.begin(), b.end());
        int sum = 0;
        bool ok = false;

        int current = 1;
        while (true)
        {
            taken[current] = true;
            sum += current;
            taken[current] = true;  // Move this line here

            if (sum == s)
            {
                bool pl = false;
                for (int i = current + 1; i <= mx; i++)  // Change == to =
                {
                    if (!taken[i])
                    {
                        pl = true;
                        break;
                    }
                }
                if (!pl)
                {
                    ok = true;
                }
                break;
            }
            current++;
            if (sum > s) break;
        }

        if (ok)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
