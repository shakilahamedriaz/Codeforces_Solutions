#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int l = s.length(), a = l, b;
        a = l;
        for (int i = 0; i < l; i++) {
            if (s[i] > '4') {
                a = i;
                break;
            }
        }
        b = a;
        for (int i = a - 1; i >= 0; i--) {
            if (s[i] == '4') {
                b = i;
            } else {
                break;
            }
        }
        if (a == l) {
            cout << s << endl;
        } else if (a == 0 || b == 0) {
            cout << "1";
            for (int i = 0; i < l; i++) {
                cout << "0";
            }
            cout << endl;
        } else {
            for (int i = 0; i < b - 1; i++) {
                cout << s[i];
            }
            cout << char(s[b - 1] + 1);
            for (int i = b; i < l; i++) {
                cout << "0";
            }
            cout << endl;
        }
    }
    return 0;
}
