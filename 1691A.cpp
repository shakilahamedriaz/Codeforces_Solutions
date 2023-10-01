#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long  a[n],oddcnt=0,evencnt=0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i]%2==0)
            {
                evencnt++;
            }
            else
            {
                oddcnt++;
            }
        }
        
        else if(oddcnt<evencnt) cout<<oddcnt<<endl;
        else cout<<evencnt<<endl;
        
       
    }
    return 0;
}
