#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string newstr, s;
        cin >> s;

        for (int i = 0; i < n; i++) {

            newstr.push_back(s[i]);
            
            int tmpx = i + 1;
            while (tmpx < n && s[tmpx] != s[i]) {
                tmpx++;
            }
            i = tmpx;
        }
        
        cout << newstr<< endl;
    }

    return 0;
}
