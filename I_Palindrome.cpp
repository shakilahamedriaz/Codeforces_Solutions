#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    long long N;
    cin >> N;

    string originalStr = to_string(N);

    string reversedStr = originalStr;
    reverse(reversedStr.begin(), reversedStr.end());
    reversedStr.erase(0, min(reversedStr.find_first_not_of('0'), reversedStr.size() - 1));

    cout << reversedStr << endl;

    if (originalStr == reversedStr) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
