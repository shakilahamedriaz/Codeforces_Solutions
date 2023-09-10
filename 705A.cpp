#include<bits/stdc++.h>
using namespace std;

int main(){
int n; cin>>n;
string uhuu= "I hate";
for(int i=2; i<=n; i++)
{
    if(i%2==0) uhuu+= " that I love";
    else  uhuu+=" that I hate";
}
cout<<uhuu<< " it" <<endl;
return 0;
}
