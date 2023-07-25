#include <iostream>
#include <vector>
using namespace std;

bool canBeSorted(vector<int>& arr) {
    int evenCount = 0, oddCount = 0;

    // Count the number of even and odd elements in the array
    for (int num : arr) {
        if (num % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    // Check if the array contains either all even numbers or all odd numbers
    return (evenCount == arr.size() || oddCount == arr.size());
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        // Check if the array can be sorted in non-decreasing order
        if (canBeSorted(arr)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
