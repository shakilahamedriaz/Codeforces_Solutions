#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>>t;

while(t--){

    long n;
    cin>>n;

 long res(0);
        if(n == 1){res = 2;}
        else if(n % 3 == 0){res = n / 3;}
        else if(n % 3 == 1){res = 2 + ((n - 4) / 3);}
        else if(n % 3 == 2){res = 1 + (n / 3);}

    cout<<res<<endl;
}




return 0;
}
