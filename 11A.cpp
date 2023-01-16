#include<bits/stdc++.h>
using namespace std;

int main()
{


    int n,d,count=0;
    cin>>n>>d;
    int arr[n];


    for(int i=0; i<n; i++){

        cin>>arr[i];
    }

    for(int i=1; i<n; i++)
    {
        if(arr[i-1]>=arr[i]){

            count+=(arr[i-1]-arr[j])/d+1;

            arr[i]=arr[i]+((arr[i-1])-arr[j])/d+1*d;
        }

        cout<<count<<endl;
    }







    return 0;
}
