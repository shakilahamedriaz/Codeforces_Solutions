#include<bits/stdc++.h>
using namespace std;
int main(){

int x, pas;
cin>>x;

pas= x/5;

if(x%5>0){

    pas++;
}

cout<<pas<<endl;

return 0;
}
