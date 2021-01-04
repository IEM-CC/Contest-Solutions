#include<bits/stdc++.h>
#define int long long
#define MAX 100005
using namespace std;

void solve() {

	int n; cin >> n;

	int a[MAX] = {0};

	for (int i = 1; i < MAX; i++) {
		a[i] = (i * (i + 1)) / 2;
	}

	for (int i = 1; i < MAX; i++) {
		a[i] = (i * (i + 1)) / 2;
		if (a[i] == n) {
			cout << i << endl;
			return;
		} else if (a[i] > n) {
			int diff = a[i] - n;

			if (diff == 1) {
				cout << i + 1 << endl;
				return;
			}

			if (diff <= i) {
				cout << i  << endl;
				return;
			}

		}
	}

}

signed main() {

	int t; cin >> t;
	while (t--) {
		solve();
	}
}

