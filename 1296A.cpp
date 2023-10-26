#include<bits/stdc++.h>
using namespace std;

void sol_shakil()
{
    int n;
    cin >>n;
    vector<int>a(n);
    int oddCnt=0, evenCnt=0, sumTotal=0;
    for(int i=0; i<n; i++)
    {
        cin >>a[i];
        sumTotal+=a[i];

        if(a[i]%2==0)
        {
            evenCnt++;
            
        }
        else
        {
            oddCnt++;
            
        }
    }
    if(sumTotal%2) //bolean false=0, ohterwise true,,1
    {
        cout<< "YES" <<endl;
    }
    else
    {
        if(evenCnt>=1 && oddCnt>=1)
        {
            cout<< "YES" <<endl;
        }
        cout<< "NO" <<endl;
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >>t;
    while(t--)
    {
        sol_shakil();
    }

    return 0;
}