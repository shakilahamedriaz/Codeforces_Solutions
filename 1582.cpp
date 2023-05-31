#include <iostream>
#include <cmath>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        
        int totalsong=(a * 1 + b * 2 + c * 3);
        if(totalsong%2==0){
         cout<< "0"<<endl;
        }
        else{
            cout<< "1"<<endl; 
         }

        
    }

    return 0;
}
