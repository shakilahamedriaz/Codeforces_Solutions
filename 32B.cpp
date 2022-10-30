#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main(){

string s,ss;
cin>>s;
int len=s.length();

for(int i=0; i<len; i++)
    {

      if(s[i]=='.')

      {
          ss+= '0';
      }
      if(s[i]=='-' && s[i+1]=='.')

      {
          ss+= '1';
          ++i;
      }
      if(s[i]=='-' && s[i+1]== '-')

      {
          ss+= '2';
          ++i;
      }


    }

cout<< ss;



return 0;
}
