#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int count = 1;
        for (int i = 1; i < n; i++) {
            if (s[i] != s[i - 1])
                count++;
        }

        cout << count/2<< endl;
    }

    return 0;
}
