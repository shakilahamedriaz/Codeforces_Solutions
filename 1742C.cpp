#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    char arr[8][8];
    while(t--)
    {
        // Read the grid
        for(ll i = 0; i < 8; i++)
        {
            for(ll j = 0; j < 8; j++)
            {
                cin >> arr[i][j];
            }
        }

        bool ok = false;

        // Check rows
        for(int i = 0; i < 8; i++)
        {
            bool flag = true;
            for(int j = 0; j < 8; j++)
            {
                if (arr[i][j] != 'R')
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
            {
                ok = true;
                cout << "R" << endl;
                break;
            }
        }

        // Check columns
        if (!ok)
        {
            for(int i = 0; i < 8; i++)
            {
                bool flag = true;
                for(int j = 0; j < 8; j++)
                {
                    if (arr[j][i] != 'B')
                    {
                        flag = false;
                        break;
                    }
                }
                if (flag)
                {
                    ok = true;
                    cout << "B" << endl;
                    break;
                }
            }
        }
        
    }

    return 0;
}
