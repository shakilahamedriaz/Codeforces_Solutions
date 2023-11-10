#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string s;
        cin >> s;
        int len = s.size();

        vector<char> firstHalf;
        vector<char> scndHalf;

        if(len % 2 == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            for(int i = 0; i < len / 2; i++)
            {
                firstHalf.push_back(s[i]);
            }



            for(int i = len / 2; i < len; i++)
            {
                scndHalf.push_back(s[i]);
            }



            if(firstHalf == scndHalf)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}
