#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n+1);
    int sum=0,sum2=0,cnt=0;
    for (int i = 0; i < n; i++) {
        
        cin >>v[i];
        sum+=v[i];
    }
    sum=sum/2;
   sort(v.begin(), v.end(), greater<int>());
    for(int j=0; j<n; j++)
    {
         sum2+=v[j];
         cnt++;
         if(sum2>sum) break;
    }
    cout<<cnt<<endl;
  
    return 0;
}
