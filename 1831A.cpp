#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        
        for(int i=0;i<n;i++){
            cout << n+1-a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
