#include<bits/stdc++.h>
using  namespace std;

int main(){


int t,x;
cin>>t;

while(t--){

    cin>>x;
    int n[x];

    for(int i=0; i<x; i++)
        cin>>n[i];


        sort(n,n+x);
        int f=0;

        for(int i=1; i<x; i++)
            {

            if(n[i]-n[i-1]>1){

                f=1;
                break;
            }

            }

            if(f==0)
            {
                cout<< "YES"<<endl;
            }
            else {

                cout<< "NO"<<endl;
            }

}

return 0;
}
