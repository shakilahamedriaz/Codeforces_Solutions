#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int main()
{
    faster;
    int t;
    cin >> t;
    while(t--)
    {
        int n;  cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++)
        {
            cin>> a[i];
        }

        vector<int> even,odd;

        for(int i=0; i<n; i++)
        {
            if(a[i]%2==0)
            {
                even.push_back(a[i]);
            }
            else
            {
                odd.push_back(a[i]);
            }
        }

        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end());
        
        bool okE = true;
        bool okO= true;
        
        //even check
        for(int i=0; i<n; i++)
        {
            if(a[i]%2==0) continue;

            if(odd.empty() || odd[0]>=a[i])
            {
                okE=false;
               break;
            }
            }

            //check odd
        for(int i=0; i<n; i++)
        {
            if(a[i]%2 != 0) continue;
            if(odd.empty() || odd[0]>=a[i])
            {
            okO=false;
            break;
            }
        }

        if(okE || okO){
            
            cout<< "YES" << endl;
        }
        else
        {
            cout<< "NO" <<endl;
        }
    }

    return 0;
}