#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int ans = 1;
        set<char> st;
        for (int i = 0; i < s.size(); i++) {
            st.insert(s[i]); // Use - insert() to add elements to the set
            if (st.size() > 3) {
                ans++;
                st.clear();
                st.insert(s[i]);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
