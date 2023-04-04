#include <iostream>
#include <string>

using namespace std;

int main() {
         
         ios_base::sync_with_stdio(false);
         cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, d;
        cin >> n >> d;

        string s;
        cin >> s;

        bool insert = false;

        for (int i = 0; i < n; i++) {
            if (s[i] < char('0' + d)) {
                s.insert(i, 1, char('0' + d));
                insert = true;
                break;
            }
        }

        if (!insert) {
            s += char('0' + d);
        }

        cout << s << endl;
    }

    return 0;
}

