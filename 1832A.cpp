#include<bits/stdc++.h>
using namespace std;


void solve(int c)
{
    string str;
    cin >> str;

    int n = str.length();

    set<int> s;
    for(int i = 0; i < n / 2; i++)
        s.insert(str[i]);

    if(s.size() == 1)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    for(int c = 1; c <= t; c++)
        solve(c);
}
