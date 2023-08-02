#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    
    while(t--){
    int n; cin >>n;
    int a1=0, b1=0, a2=0, b2=0;
    int arr[n+3], brr[n+3];

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        if(arr[i]==0) a1++;
        else b1++;
    }

    for(int i=0; i<n; i++)
    {
        cin >> brr[i];
        if(brr[i]==0) a2++;
        else b2++;
    }
     int ans1= 0, ans2=0;

     for(int i=0; i<n; i++)
     {
        if(arr[i] != brr[i]) ans1 ++;
     }
     ans2= abs(a1-a2)+abs(b1-b2);

     ans2/=2;
     ans2++;

     cout<< min(ans1,ans2) <<endl;
  }

  return 0;
}