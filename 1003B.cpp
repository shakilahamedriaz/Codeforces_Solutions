#include <iostream>
using namespace std;

int main() {
    int a, b, x;
    cin >> a >> b >> x;

    string result;
    
    // Initialize the string with alternating '0' and '1'
    if (a > b) {
        result += "0";
        a--;
    } else {
        result += "1";
        b--;
    }

    for (int i = 1; i < a + b; i++) {
        // Check if we need to create an '0' or '1'
        if (i % 2 == x % 2) {
            if (a > 0) {
                result += "0";
                a--;
            } else {
                result += "1";
                b--;
            }
        } else {
            if (b > 0) {
                result += "1";
                b--;
            } else {
                result += "0";
                a--;
            }
        }
    }

    cout << result << endl;
    return 0;
}
