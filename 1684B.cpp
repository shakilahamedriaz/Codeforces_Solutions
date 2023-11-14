#include <iostream>
#define ll long long

using namespace std;

int main() {
    ll t;
    cin >> t;

    while (t--) {
        ll a, b, c;
        cin >> a >> b >> c;
        ll x,y,z;

        z=c;
        y=z+b;
        x=y+a;

        cout << x << " " << y << " " << z << endl;
    }

    return 0;
}
