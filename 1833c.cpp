#include <iostream>
#include <vector>

using namespace std;

string isBeautifulArray(const vector<int>& a) {
    int evenCount = 0, oddCount = 0;

    for (int num : a) {
        if (num % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    if (evenCount > 0 && oddCount > 0)
        return "NO";

    return "YES";
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        string result = isBeautifulArray(a);
        cout << result << endl;
    }

    return 0;
}
