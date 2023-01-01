#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,w,h,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d %d",&w,&h,&n);
        int count=1;
        x1:
        if(w%2!=0 && h%2!=0){
            goto x2;
        }
        if(w%2==0){
            count=count*2;
            w=w/2;
        }
        if(h%2==0){
            count=count*2;
            h=h/2;
        }
        goto x1;
        x2:
        if(count>=n){

            cout<<"Yes"<<endl;
        }
        else{

            cout<< "No"<<endl;
        }
    }

    return 0;
}
