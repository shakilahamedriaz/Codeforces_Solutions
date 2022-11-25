
#include<bits/stdc++.h>
int main(){
    int k,r,a;
    cin>>k>>r;
    if(k%10==0 || k==r || k%10==r){
        cout<<"1 "<<;
    }
    else{
        for(int i=2;i<=10;i++){
            a=k*i;
            if(a%10==0 || a%10==r){
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}
