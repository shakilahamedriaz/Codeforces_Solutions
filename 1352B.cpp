#include <bits/stdc++.h>

using namespace std;

int main() {

       ios_base::sync_with_stdio(false);
       cin.tie(NULL);


	int t; cin >> t;
	while (t--) {
		int n, k; cin >> n >> k;
		int n1 = n - (k - 1);

		if (n1 > 0 && n1 % 2 == 1) {
			cout << "YES\n";
			for (int i = 0; i < k - 1; ++i) cout << "1 ";
			cout << n1 << endl;
			continue;
		}

		int n2 = n - 2 * (k - 1);
		if (n2 > 0 && n2 % 2 == 0) {
			cout << "YES\n";
			for (int i = 0; i < k - 1; ++i) cout << "2 ";
			cout << n2 << endl;
			continue;
		}
		cout << "NO\n";
	}

    return 0;
}
