#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;

string s;
cin>> s;

int x=2;
for(int i=0; i<n; ){

    cout<<s.at(i);
    i=i+x;

    x++;
}
cout<<endl;

return 0;
}
