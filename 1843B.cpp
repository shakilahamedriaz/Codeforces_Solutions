#include<bits/stdc++.h>
using namespace std;

void shakil()
{
    long long int n,sum=0,cnt=0;

    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        sum+=abs(arr[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i]>=0)
        {
            continue;
        }
        else{

            while(arr[i]<=0)
            {
                i++;
            }
            cnt++;
        }
    }

    cout<<sum<< " "<<cnt<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    cout.tie(NULL);

    int t=1;
    cin >> t;

    while(t--)
    {
       shakil();
    }
    return 0;
}