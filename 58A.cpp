#include<bits/stdc++.h>
using namespace std;

int main(){


string str;
cin>>str;
string a= "hello";

int x=0, y=0;

for(int i=0; i<str.size(); i++){

    if(str[i]==a[x]){

        x++;

        y++;

    }


}
if(y==5){

    cout<<"YES\n";
}
else{

    cout<<"NO\n";
}




return 0;
}
