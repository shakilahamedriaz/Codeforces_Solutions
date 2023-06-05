#include <iostream>
#include <vector>

using namespace std;

string canDivideCandiesEqually(int n, vector<int>& candies) {
    int count1 = 0, count2 = 0;
    for (int i = 0; i < n; i++) {
        if (candies[i] == 1)
            count1++;
        else
            count2++;
    }
    
    if (count1 % 2 == 0 && count2 % 2 == 0)
        return "YES";
    
    if (count1 % 2 == 0 && count2 % 2 == 1) {
        if (count1 > 0)
            return "YES";
        else
            return "NO";
    }
    
    if (count1 % 2 == 1 && count2 % 2 == 0) {
        if (count2 > 1)
            return "YES";
        else
            return "NO";
    }
    
    return "NO";
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> candies(n);
        for (int i = 0; i < n; i++) {
            cin >> candies[i];
        }
        
        cout << canDivideCandiesEqually(n, candies) << endl;
    }
    
    return 0;
}
