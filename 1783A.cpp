#include<bits/stdc++.h>
using namespace std;

void ans(int n)
{
    int arr[n+4];
    for(int i=0; i<n; i++) cin >> arr[i];

    if(arr[0]==arr[n-1]) cout<< "NO" <<endl;
    else{

        cout<< "YES" << endl;
        cout<< arr[0]<< " ";

        for(int i=n-1; i>0; i--) cout<<arr[i]<< " ";
        
        cout<<endl;
    }
}

int main()
{

     int t;
     cin >> t;
     while(t--)
     {
        int n;
        cin >> n;
        ans(n);
     }

    return 0;
}