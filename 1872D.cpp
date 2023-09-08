#include <iostream>
using namespace std;

typedef long long ll;

ll gcd(ll a, ll b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

ll lcm(ll a, ll b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        ll n, x, y;
        cin >> n >> x >> y;

        ll LCM = lcm(x, y);
        ll a = (n / x) - (n / LCM);
        ll b = (n / y) - (n / LCM);

        ll v2 = (b * (b + 1)) / 2;
        ll v1 = (n * (n + 1)) / 2 - ((n - a) * (n - a + 1)) / 2;

        cout << v1 - v2 << endl;
    }

    return 0;
}
