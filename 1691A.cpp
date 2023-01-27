#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int counter = 0;
        for (int i = 0; i < n-1; i++) {
            if ((a[i] + a[i+1]) % 2 == 1) {
                counter++;
                for (int j = i+1; j < n-1; j++) {
                    a[j] = a[j+1];
                }
                n--;
                i--;
            }
        }
        cout << counter << endl;
    }
    return 0;
}
