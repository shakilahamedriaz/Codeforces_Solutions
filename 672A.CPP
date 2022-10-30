#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){


int n;
string a;

cin>>n;
for(int i=1; i<=n; i++){


    a+= to_string(i);
}

cout<< a[n-1];


return 0;
}
