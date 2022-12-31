#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main(){


char n[1000];
int count=0;

cin>>n;

int l=n.length();

while(l!=1){
    count++;
    sum=0;

    for(int i=0; i<l; i++){

        sum=sum+(n[i]-'0')
    }

    cout<<sum;
    l=n.length();

}

cout<<count<<endl;






return 0;

}
