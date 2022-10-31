#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){

int l,n;
char str[150];
cin>>n;

while(n--)
{

    cin>>str;
    l=strlen(str);

    if(l<=10){
        cout<<str<<endl;
    }else{

        cout<<str[0]<<l-2<<str[l-1]<<endl;

    }

}


return 0;
}
