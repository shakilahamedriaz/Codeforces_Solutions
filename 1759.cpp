#include<bits/stdc++.h>
using namespace std;
int t;
string s;

int main() {
    cin>>t;
    while(t--) {
        cin>>s;
        if(s.size()%3 == 0) {
            string p = "Yes";
            int flag = 1;
            for(int i=0;i<s.size();i++) {
                if(s[i] != p[i%3]) {
                    flag = 0;
                    break;
                }
            }
            if(flag) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}

