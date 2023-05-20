#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int a[200];

        // Fill the array with values divisible by their indices
        for (int i = 0; i < n; i++) {
            a[i] = (i + 1) * (n + 1);
        }

        // Adjust the last element to make the sum divisible by n
        int sum = 0;
        for (int i = 0; i < n - 1; i++) {
            sum += a[i];
        }
        a[n - 1] = (n - sum % n) * (n + 1);

        // Print the array elements
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
