#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;

   while(t--)
   {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];

    }
    
    sort(arr, arr+n);
   
   int cnt=0;
   for(int i=0; i<n/2; i++)
   {
      cnt+=abs(arr[i]-arr[n-i-1]);
   }

   cout<< cnt<<endl;

   }

    return 0;
}