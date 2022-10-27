#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main(){

int i,cnt=0;
string alpha;
cin>>alpha;
sort(alpha.begin(),alpha.end());

for(i=0; i<alpha.length(); i++)
{
    if(alpha[i]!=alpha[i+1]){

        cnt++;
    }

}


if(cnt%2==0){

    cout<< "CHAT WITH HER!"<<endl;
}else{

    cout<< "IGNORE HIM!"<<endl;
 }



return 0;
}
