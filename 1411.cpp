#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int letter = 0;
        int carli = 0;
        
        for(int i = n - 1; i >= 0; i--)
        {
            if(s[i] == ')')
            {
                carli++;
            }
            else
            {
                letter = s.size() - carli;
                break;
            }
        }

        if(letter == carli)
        {
            cout << "No" << endl;
        }
        else if(carli > letter)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
