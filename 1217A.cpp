#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {


  int w;
  cin >> w;
  while (w--) {
    ll s, i, e;
    cin >> s >> i >> e;
    ll a = 0;
    if (s + e > i) {
      if (i >= s) {
        e -= i - s + 1;
        s = i + 1;
      }
      ll d = s + e - i;
      a = min(e + 1, d / 2 + d % 2);
    }
    cout << a<< endl;
  }
  return 0;
}
