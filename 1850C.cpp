#include <bits/stdc++.h>
using namespace std;

string ShakilsAns(vector<string>& grid) {
    string word = "";
    for (int col = 0; col < 8; col++) {
        for (int row = 0; row < 8; row++) {
            if (grid[row][col] != '.') {
                word += grid[row][col];
            }
        }
    }
    return word;
}

int main() {
    int t;
    cin >> t; 

    while(t--)
      {

        vector<string> grid(8);
        for (int row = 0; row < 8; row++) {
            cin >> grid[row]; 
        }

        string result = ShakilsAns(grid);
        cout << result << endl;
    }

    return 0;
}
