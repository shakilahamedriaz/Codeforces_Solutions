#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>>t;
int b,p,f,h,c;
while(t--){

    cin>>b>>p>>f
        >>h>>c;

  int totalPaty = p+h;
  if(b>=totalPaty*2){


    int totalprofit= h*p + c*f;
    cout<< totalprofit<<endl;

  }


}






return 0;
}
