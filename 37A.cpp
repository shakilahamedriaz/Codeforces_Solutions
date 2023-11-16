#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >>n;
    int arr[n];
   
    set<int>st;
    map<int, int>mp;
    for(int i=0; i<n; i++)
    {
       cin>>arr[i];
       st.insert(arr[i]);
       mp[arr[i]]++;

    }

    int total= st.size();

    int height =0;
    for(auto it: mp)
    {
        height=max(height, it.second);
    }

   cout<<height<< " " <<total<<endl;

    return 0;
}