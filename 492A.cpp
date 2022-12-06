#include <iostream>
using namespace std;
int t, i = 0, last = 0, current = 0;
int main() {
    cin >> t;
    while (t > 0) {
        i++;
        current = last + i;
        last = current;
        t -= current;
        if (t < 0) {
            i--;
        }
    }
    cout << i;
}
