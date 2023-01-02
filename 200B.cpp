#include<bits/stdc++.h>
using namespace std;

int main(){

int t;cin>>t;
int arr[120];
double  sum=0.0;
for(int i=0; i<t; i++){

    cin>>arr[i];

    sum+=arr[i];

}


    cout<<fixed<<setprecision(12)<<sum/t<<endl;


return 0;
}
