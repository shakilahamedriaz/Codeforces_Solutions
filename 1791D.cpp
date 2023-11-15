#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        map<char, int> mpcnt;
        set<char> take;

        for (int i = 0; i < n; i++)
        {
            mpcnt[s[i]]++;
        }

        bool ok = false;
        for (auto it : mpcnt)
        {
            if (it.second == 2) 
            {
                ok = true;
                break;
            }
            else if(it.second==3)
            {
                cout<< "3"<<endl;
                return 0;
            }

        }

        if (!ok)
        {
            cout << "2" << '\n';
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                take.insert(s[i]);
            }

            int setlen = take.size();
            int total = setlen + (n - setlen);

            cout << total << endl;
        }
    }

    return 0;
}
