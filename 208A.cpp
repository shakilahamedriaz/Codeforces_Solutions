#include<bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    int cnt=true;
    cin>>s;

    for(int i=0; i<s.size(); i++)
    {
        if(s[i]== 'W' && s[i+1]=='U' && s[i+2]=='B'){

            i+=2;

            if(!cnt){
                cout<< " ";
            }
            continue;
        }
        else{

            cnt=false;

            cout<<s[i];
        }
    }





    return 0;
}
