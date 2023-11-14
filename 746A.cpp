#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;

    
    int compote = min({a, b / 2, c / 4});

    int totalFruits = compote * 7;

    cout << totalFruits <<endl;

    return 0;
}
