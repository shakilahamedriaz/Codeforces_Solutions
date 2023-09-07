#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == b)
            cout << "0" << endl;
        else if (a > b) {
            int moves = 0;
            while (a > b) {
                a -= c;
                b += c;
                moves++;
                if (a <= b)
                    break;
            }
            cout << moves << endl;
        } else {
            int moves = 0;
            while (b > a) {
                b -= c;
                a += c;
                moves++;
                if (b <= a)
                    break;
            }
            cout << moves << endl;
        }
    }
    return 0;
}
