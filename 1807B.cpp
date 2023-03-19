#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }

        int mi=0, bi=0;
        swap(a[0], a[n-1]);

        for(int i=0; i<n; i++){
            if(a[i] % 2 == 0){
                mi += a[i];
            }
            else{
                bi += a[i];
            }
        }

        if(mi > bi){
            cout<< "YES" << endl;
        }
        else{
            cout<< "NO" << endl;
        }
    }
    return 0;
}
