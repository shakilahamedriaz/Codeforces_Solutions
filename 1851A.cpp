#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k, h;
        cin >> n >> m >> k >> h;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            int diff = abs(h - arr[i]);

            if (diff % k == 0 && diff <= (m - 1) * k)
            {
                sum++;
            }
        }
        cout << sum << endl;
    }

    return 0;
}
