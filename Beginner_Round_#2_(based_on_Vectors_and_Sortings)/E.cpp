#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define MAX 100005
#define mod 1000000007 // 1e9+7
using namespace std;

// Returns whether it is possible to have a configuration
// where the distance between like elements is atleast = dist
bool isPoss(int f[], int n, int dist) {
	dist++;
	int a[n];
	memset(a, -1, sizeof(a));

	for (int i = 0; i <= n; i++) {
		int num = i;
		int freq = f[i];

		// Assign values
		for (int j = i; j < n && freq; j += dist) {
			a[j] = i;
			freq--;
		}
		if (freq > 0) return 0;
	}
	return 1;
}

void solve() {

	int n; cin >> n;
	int a[n];
	int f[n + 1] = {0};
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		f[a[i]]++;
	}

	sort(f, f + n + 1, greater<int>());

	int s = 0, e = n - 2;
	int ans = 0;
	while (s <= e) {
		int mid = (s + e) / 2;
		if (isPoss(f, n, mid)) {
			s = mid + 1;
			ans = max(ans, mid);
		} else {
			e = mid - 1;
		}
	}

	cout << ans << endl;
}

signed main() {

	int t; cin >> t;
	while (t--) {
		solve();
	}
}
