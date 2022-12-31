#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;

    cin>>t;
    for(int i=0;i<t;i++){

        cin>>n;
        int a,b;

        cin>>a;
        int min=a;
        for(int j=1;j<n;j++){
            scanf("%d",&b);
            if(min>b){
                min=b;
            }
        }
        if(a==min){

            cout<< "Yes"<<endl;
        }
        else{

            cout<< "No"<<endl;
        }
    }
    return 0;
}
