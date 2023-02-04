#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;

        int i, a=0,b=0;
        bool statement= false;

        for(i=0; i<s.length(); i++)
        {
            if(s[i]=='A')a++;
            if(s[i]=='B')b++;

            if(b>a){

                statement= true;
                break;
            }
        }

        if(b<1 || s[s.size()-1]=='A') statement = true;

        if(statement) cout<< "NO"<<endl;
        else cout<< "YES"<<endl;
    }




    return 0;
}
