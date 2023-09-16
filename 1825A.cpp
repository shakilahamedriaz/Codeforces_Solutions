#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length();

        int same = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] != s[i + 1])
            {
                same++;
            }
        }

        if (same == 0)
        {
            cout << "-1" << endl;
            continue;
        }
          if(same==0) cout<< "-1"<<endl;

        // if(count(s.begin(), s.end(), s[0])==n)
        // {
        //     cout<< "-1" <<endl;
        //     continue;
        // }
        

        bool palindrome = true;
        int left = 0, right = n - 1;
        while (left < right)
        {
            if (s[left] != s[right])
            {
                palindrome = false;
                break;
            }
            left++;
            right--;
        }
        if (palindrome)
        {
            cout << n - 1 << endl;
        }
        else
        {
            cout << n << endl;
        }
    }

    return 0;
}
