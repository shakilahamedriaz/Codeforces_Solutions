#include<bits/stdc++.h>
using namespace std;

int main(){


int t;
cin>>t;
int n;
while(t--){
    cin>>n;

    int a= n/3;
    int b= n/3;

    if(n%3==1){

        a++;
    }
    else if(n%3==2){

        b++;
    }

    cout<<a<<" "<<b<<endl;
}






return 0;
}
