#include<bits/stdc++.h>
using namespace std;

int main(){


int n,c=1,m=1;
cin>>n;
int arr[n];
for(int i=0; i<n; i++){
    cin>>arr[i];
}


for(int i=0; i<n-1; i++){

    if(arr[i]<arr[i+1])
    {
        c+=1;

        if(m<c){

            m=c;
        }
    }
    else{

        c=1;
    }
}

  cout<<m<<endl;

return 0;
}
