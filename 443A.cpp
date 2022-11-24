#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main(){

string s;
set<char>b;

getline(cin,s);

for(int i=0; i<s.length(); i++){

   if(s[i]>='a' && s[i]<='z')

        b.insert(s[i]);
}

cout<<b.size()<<endl;

return 0;
}
