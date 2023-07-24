#include <bits/stdc++.h>
using namespace std;

void solve()
{
     int s;
     cin >> s;
     
     int table[s][s];

     for(int i = 0; i < s; i++)
     {
        table[0][i] = 1;
        table[i][0] = 1;
     }

     for(int i = 1; i < s; i++)
     {
        for(int j = 1; j < s; j++)  // Fix: changed i<s to j<s
        {
            table[i][j] = table[i][j-1] + table[i-1][j];
        }
     }

     cout << table[s-1][s-1] << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    solve();

    return 0;
}
