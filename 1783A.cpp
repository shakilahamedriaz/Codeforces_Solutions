#include<bits/stdc++.h>
#include<array>
using namespace std;
#define ll long long
int main()
{

     int t;
     cin>>t;
     while(t--)
     {
         int n;
         cin>>n;
         ll arr[n];

         for(ll i=1; i<=n; i++){

            cin>>arr[i];
         }

         if(arr[1]==arr[n]){
            cout<< "NO"<<endl;
            return 0;
         }

         else{
         cout<< "YES"<<endl;
         cout<<arr[n]<< " ";

         for(ll i=1; i<=n-1; i++)
         {
             cout<< arr[i]<< " ";
         }

         cout<< endl;
         }
     }






    return 0;
}
