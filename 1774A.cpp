#include<bits/stdc++.h>
using namespace std;
const int N=1e4 + 10;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t;
    cin>>t;

    while(t--)
    {

       int b;
        cin >> b;
        char kk_1;
        cin >> kk_1;
        int kk_3 = 0;
        for (int i = 0; i < b - 1; i++) {

            char kk_2;
            cin >> kk_2;
            if (kk_2 == '1') {
                if (kk_3 == 0) {

                    cout << '-';
                    kk_3 = -1;
                }
                else {

                    cout << '+';
                    kk_3 = 0;
                }

            }
            else cout << '+';

        }
        cout << endl;
    }

    return 0;
}

