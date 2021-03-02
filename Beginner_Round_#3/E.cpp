#include <bits/stdc++.h>
#define int long long
#define pb push_back
using namespace std;

// returns if it is possible to place k ships on the board
bool isPoss(int n, int k, int a, int b[], int pos) {

	int board[n] = {0};

	for (int i = 0; i <= pos; i++) {
		board[b[i] - 1] = 1;
	}

	// for (int i = 0; i < n; i++) {
	// 	cout << board[i] << " ";
	// } cout << endl;

	int sz = a;
	for (int i = 0; i < n && k; i++) {

		if (board[i] == 0) {
			sz--;
		} else {
			sz = a;
		}

		if (sz == 0 && k) {
			k--;
			i++;
			sz = a;
		}
	}

	if (k <= 0) return 1;
	else return 0;

}

signed main() {

	int n, k, a;
	cin >> n >> k >> a;
	int m; cin >> m;
	int b[m];
	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}
	int s = 0, e = m - 1;

	int ans = INT_MAX;
	while (s <= e) {
		int mid = (s + e) / 2;
		// cout << mid + 1 << endl;
		if (isPoss(n, k, a, b, mid)) {
			ans = mid;
			s = mid + 1;
			// cout << "poss" << endl;
		} else {
			// cout << "not poss" << endl;
			e = mid - 1;
		}
	}

	// ans is the last index where it is possible to have placements
	if (ans == m - 1) {
		cout << "-1" << endl;
	} else if (ans == INT_MAX) {
		cout << "1" << endl;
	} else {
		cout << ans + 2 << endl;
	}

}

