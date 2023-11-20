#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >>n;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin >>arr[i];
    }
    int ev=0,odd=0,neg=0,pos=0;

    for(int i=0; i<n; i++)
    {
        if(arr[i]%2==0) ev++;
        else odd++;

        if(arr[i]>0) pos++;
        else if(arr[i]<0) neg++;
        
    }
    cout<< "Even: "<<ev<<endl;
    cout<< "Odd: "<<odd<<endl;
    cout<< "Positive: "<<pos<<endl;
    cout<< "Negative: "<<neg<<endl;

    return 0;
    
}