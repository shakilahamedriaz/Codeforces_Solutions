#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n], arr2[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        arr2[i] = arr[i];
    }

    int min_index = 1, min_index2 = n;
    int min_diff = abs(arr[0] - arr[n - 1]);

    for (int i = 0; i < n - 1; i++) {
        int current_diff = abs(arr[i] - arr[i + 1]);
        if (current_diff < min_diff) {
            min_diff = current_diff;
            min_index = i + 1;
            min_index2 = i + 2;
        }
    }

    cout << min_index << " " << min_index2 << endl;

    return 0;
}
