#include <iostream>
#include <string>
using namespace std;

#define M 1000000

bool marked[M];

// Function to check if a number is prime
bool isPrime(int n) {
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    return marked[n] == false;
}

// Function to generate prime numbers up to n using the Sieve of Eratosthenes
void sieve(int n) {
    for (int i = 3; i * i <= n; i += 2) {
        if (marked[i] == false) {
            for (int j = i * i; j <= n; j += i + i) {
                marked[j] = true;
            }
        }
    }
}

// Function to process a test case
void processTestCase() {
    string str;
    cin >> str;

    int len = str.length();
    int cnt = 0;
    for (int i = 0; i < len; i++) {
        if (str[i] == '1' || str[i] == '3' || str[i] == '7') {
            cout << str[i];
            cnt++;
        }

        if (cnt == 2) break;
    }
    cout << endl;
}

int main() {
    sieve(1001); // Precompute prime numbers up to 1001
    int test_case;
    cin >> test_case;
    while (test_case--) {
        processTestCase();
    }

    return 0;
}
