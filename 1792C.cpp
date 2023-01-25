#include<bits/stdc++.h>
using namespace std;

int main()
{

        string s[100],t[100];
        for(int i=0; i<100; i++)
        {
            cin>>s[i];
            cin>>t[i];
        }


        int ls, lt;
        ls= sizeof(s)/sizeof(string);
        lt= sizeof(t)/sizeof(string);
        if(ls != lt){

            cout<< "NO"<<endl;
        }
        else{

            for(int i=0; i<ls; i++)
            {
                if(s[i]==t[lt-1]){

                    cout<< "YES"<<endl;
                }
                else{

                    cout<< "NO"<<endl;
                }
            }


        }





    return 0;
}
