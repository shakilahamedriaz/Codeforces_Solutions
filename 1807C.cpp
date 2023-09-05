#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string str;
        cin >> str;

        map<char, int> mp;
        int t = 0;
        vector<int> v;

        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                if (mp[str[i]] == 1) {
                    t = 1;
                } else {
                    mp[str[i]] = 0;
                    v.push_back(0);
                }
            } else {
                if (mp.find(str[i]) != mp.end()) {
                    if (mp[str[i]] == 0) {
                        t = 1;
                    } else {
                        v.push_back(1);
                    }
                } else {
                    mp[str[i]] = 1;
                    v.push_back(1);
                }
            }
            if (t == 1) {
                cout << "NO" << endl;
                break;
            }
        }

        if (t == 0) {
            for (int i = 0; i < v.size(); i++) {
                if (i % 2 == 1) {
                    if (v[i] != 1) {
                        cout << "NO" << endl;
                        break;
                    }
                } else {
                    if (v[i] != 0) {
                        cout << "NO" << endl;
                        break;
                    }
                }

                if (i == v.size() - 1) {
                    cout << "YES" << endl;
                }
            }
        }
    }

    return 0;
}
