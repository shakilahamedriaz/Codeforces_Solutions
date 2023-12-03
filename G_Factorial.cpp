#include <iostream>

using namespace std;
long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    // Number of test cases
    int T;
    cin >> T;

    for (int i = 0; i < T; ++i) {
    
        int N;
        cin >> N;

        
        cout << factorial(N) << endl;
    }

    return 0;
}
