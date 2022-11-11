#include<bits/stdc++.h>
using namespace std;
int main(){


int t;
cin>>t;

while(t--){
    long long n, cnt=0, starthere;

    cin>>n;

    for(int i=1; i<=9; i++)
    {
        starthere =i;

    while(starthere<=n){

        cnt++;
        starthere=starthere*10+i;
    }

    }

    cout<<cnt<<endl;

}



return 0;
}
