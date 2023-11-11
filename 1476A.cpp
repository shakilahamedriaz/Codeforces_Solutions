#include <iostream>

using namespace std;

int minMaxElement(int n, int k) {
    int result;

    if (n % k == 0) {
        result = 1;
    } else {
        result = 2;
    }

    return result;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        int answer = minMaxElement(n, k);

        cout << answer << endl;
    }

    return 0;
}
