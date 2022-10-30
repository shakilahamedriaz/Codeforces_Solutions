#include<bits/stdc++.h>
using namespace std;
int main(){

int t,a,b,c;

for(int i=0; i<t; i++){

    cin>>a>>b>>c;

    if((a == b + c) || (b == c + a) || (c == a + b)){

    cout<<"YES"<<endl;

    }else{

    cout<<"NO"<<endl;

    }
}



return 0;
}
