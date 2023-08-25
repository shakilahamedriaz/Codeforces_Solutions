#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;  cin >> n;

    vector<int> arr(n), result;
    int cnt = 1;

    for(int i = 0; i < n; i++) cin >> arr[i];
    result.push_back(arr[0]);
    for(int i = 1; i < n; i++){
        if(arr[i] >= arr[i-1]){
            result.push_back(arr[i]);
            cnt++;
        }
        else{
            result.push_back(arr[i]);
            result.push_back(arr[i]);
            cnt += 2;
        }
    }
    cout << cnt << endl;
    for(int i = 0; i < result.size(); i++) cout << result[i] << " ";
    cout << endl;
}

int main(){
    int t, n; cin >> t;
    while(t--){
        solve();
    }
}
