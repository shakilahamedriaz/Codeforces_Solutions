#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int h[n];
    for (int i = 0; i < n; ++i)
        cin >> h[i];

    int start = 1, end = 2, min_diff = abs(h[0] - h[1]);

    for (int i = 1; i < n; ++i)
    {
        int diff = abs(h[i] - h[(i + 1) % n]);
        if (diff < min_diff)
        {
            min_diff = diff;
            start = i + 1;
            end = (i + 2) % n + 1;
        }
    }

    cout << start << " " << end << endl;
    return 0;
}
