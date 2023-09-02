#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        if (s[0] == '1') cout << "13" << endl;
        else if (s[0] == '2') cout << "23" << endl;
        else if (s[0] == '3') cout << "31" << endl;
        else if (s[0] == '4') cout << "41" << endl;
        else if (s[0] == '5') cout << "53" << endl;
        else if (s[0] == '6') cout << "61" << endl;
        else if (s[0] == '7') cout << "71" << endl;
        else if (s[0] == '8') cout << "83" << endl;
        else if (s[0] == '9') cout << "97" << endl;
        else cout << "-1" << endl;
    }

    return 0;
}
