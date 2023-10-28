#include <iostream>
#include <string>

using namespace std;

bool isGoodString(string s) {
    int n = s.length();
    
    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        string s, t;
        cin >> s >> t;
        
        // Append the substring t to s and check if the resulting string is good
        for (int i = 0; i < n; i++) {
            string s_copy = s;
            s_copy.insert(i, t);
            if (isGoodString(s_copy)) {
                cout << "YES" << endl;
                goto end_of_test_case; // Exit the loop for this test case
            }
        }
        
        // If no good string is found, print "NO"
        cout << "NO" << endl;
        
        end_of_test_case: continue;
    }
    
    return 0;
}
