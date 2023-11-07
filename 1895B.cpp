#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<pair<int, int>> points;
        vector<int> a(2 * n);

        for (int i = 0; i < 2 * n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        int first_index = 0;
        int last_index = 2 * n - 1;

        while (first_index < last_index) {
            points.push_back({a[first_index], a[last_index]});
            first_index++;
            last_index--;
        }

        int min_path = 0;
        for (int i = 0; i < n-1; i++) {
            min_path += abs(points[i].first - points[i+1].first) + abs(points[i].second - points[i+1].second);
        }
        
       // min_path= min_path-( points[n-1].first + points[n-1].second );
       //by using n-1 we can reduce the extra it.
       
        cout << min_path << endl;
        for (const auto& point : points) {
            cout << point.first << " " << point.second << endl;
        }
    }

    return 0;
}
