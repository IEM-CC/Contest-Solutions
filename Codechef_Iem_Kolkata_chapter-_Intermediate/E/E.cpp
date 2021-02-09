#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main() {

	int k, x, T;

	cin >> T;
	while (T--) {
		cin >> k >> x;
		cout << (x + 9 * (k - 1)) << "\n";
	}

	return 0;
}
