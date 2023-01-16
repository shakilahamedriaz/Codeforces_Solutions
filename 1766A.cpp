#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;

    while(t--)
    {
        cin>>n;

        if(n<=10){

            cout<<n<<endl;
        }else{

        int a= n/10;
            a=a+9;

            cout<<a<<endl;


        }


    }





    return 0;
}


//incorrect ,,have to fix it
