#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main(){

int n;
cin>>n;
string s;
cin>>s;
int count =0;
for(int i=0; i<n; i++){


    s[i]=towlower(s[i]);


}

    sort(s.begin(), s.end());

    for(int i=0; i<n; i++){


        if(s[i] != s[i+1])
        {

            count++;
        }
    }

    if(count == 26){

        cout<< "YES";
    }else{

       cout<< "NO";

    }

return 0;
}
