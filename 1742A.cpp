#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){

int t,a,b,c;
cin>>t;

for(int i=1; i<=t; i++){

    cin>>a>>b>>c;

    if(a == b + c || b == a + c || c == a + b){

    cout<< "YES" <<endl;

    }
    else {

        cout<< "NO" <<endl;
    }

}

return 0;
}
