#include <bits/stdc++.h>
using namespace std;



int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        map<int, int> cntFreq;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            cntFreq[arr[i]]++;
        }
        
      for (int i = 0; i < n; i++)
      {
        if (cntFreq[arr[i]] == 1)
            {
                cout<<i+1<<endl;
            }
      }
       
    }

    return 0;
}
