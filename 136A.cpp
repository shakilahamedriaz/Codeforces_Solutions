#include<bits/stdc++.h>
using namespace std;


int main()
{
    int m, q;
    cin >> m;
    vector<int> f(m+1);
    for (int i = 1; i <= m; ++i)
    {
        cin >> q;
        f[q] = i;
    }
    cout << f[1];
    for (int i = 2; i <= m; ++i)
    {
        cout << " ";
        cout<< f[i];
    }
    cout << "\n";
    return 0;
}
