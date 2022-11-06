#include<bits/stdc++.h>
#include<string.h>
using namespace std;


void ans(){

    string a;
    cin>>a;
    int i,n,sumfirst=0,sumlast=0;



          for(int i=0; i<3; i++)
         {
             sumfirst+=a[i];
          }

       for(int i=3; i<6; i++)
      {
        sumlast+=a[i];

       }


      if(sumfirst==sumlast)
      {
        cout<<"YES"<<endl;
      }
      else{
        cout<< "NO"<<endl;
       }
}


int main(){

int t;
      cin>>t;
           while(t--){

           ans();
        }
}
