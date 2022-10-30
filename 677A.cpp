#include<bits/stdc++.h>
using namespace std;

int main(){

int n,h,a,total_1=0,total_2=0;
cin>>n>>h;

for(int i=1; i<=n; i++){

    cin>>a;

    if(a>h){

        total_2+=2;
    }

    if(a<=h){

        total_1+=1;
    }

}

int t = total_1+total_2;
cout<<t<<endl;


return 0;
}
