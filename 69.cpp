#include<bits/stdc++.h>
#include<array>
using namespace std;
int main()
{
    int t,s1=0,s2=0,s3=0;
    cin>>t;
    int arr[100][100];

   for(int i=0; i<t; i++){

      for(int j=0; j<3; j++){

        cin>>arr[i][j];


      }

      s1+=arr[i][0];
      s2+=arr[i][1];
      s3+=arr[i][2];

   }

    if(s1==0 && s2==0 && s2==0)

        cout<<"YES";

    else

       cout<<"NO";



    return 0;

}

