#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        if (s[0] == '0') {
            cout << "0\n";
        } else {
            int l = s.length();
            int count = 0;
            for (int i = 1; i < l; i++) {
                if (s[i] == '?') {
                    count++;
                }
            }
            if (s[0] == '?') {
                cout << static_cast<int>(pow(10, count) * 9) << '\n';
            } else {
                cout << static_cast<int>(pow(10, count)) << '\n';
            }
        }
    }
    return 0;
}
