#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b,c;
    cin >> a >>b >>c;

    if(a > b){
        cout<< "First" <<endl;
    }
    else if(a<b) {
        cout<< "Second" <<endl;
    }
    else{
        if(c%2==1){
            cout<< "First"<<endl;
        }
        else {
            cout<< "Second" <<endl;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >>t;
    while(t--){

    solve();
    }
    return 0;
}