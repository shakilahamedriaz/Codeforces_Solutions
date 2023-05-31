#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long n, k;
    cin >> n >> k;
    if (n % 2 == 0) {
      cout << "YES" << endl;
    } else if (k % 2 == 1) {
      cout << "NO" << endl;
    } else {
      long long x = n / 2;
      long long y = n / k;
      if (x >= 0 && y >= 0) {
        cout << "YES" << endl;
      } else {
        cout << "NO" << endl;
      }
    }
  }
  return 0;
}