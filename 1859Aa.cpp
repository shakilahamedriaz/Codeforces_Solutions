#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
#define fon for(int i=0; i<n; i++)
#define pb push_back

void shakil(){
    string st;
    int n, m=0, k, h;
    cin >> n;
    int arr[n];
    fon cin >> arr[i];
    vector<int> b, c;
    map<int, int> s;
    fon s[arr[i]]++;
    fon m = max(m, arr[i]);
    if(s.size() == 1) cout << "-1\n";
    else {
        sort(arr, arr + n);
        fon {
            if(arr[i] == m) b.pb(arr[i]);
            else c.pb(arr[i]);
        }

        cout << c.size() << " " << b.size() << endl;
        for(auto i : c) cout << i << " ";
        cout << endl;
        for(auto i : b) cout << i << " ";
        cout << endl;
    }
}

void solve(){

}

int main(){
    int testcase;
    cin >> testcase;
    while(testcase--){
        shakil();
    }
    return 0;
}
