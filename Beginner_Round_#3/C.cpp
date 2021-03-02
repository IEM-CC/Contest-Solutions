#include<bits/stdc++.h>
#define int 				long long
#define pb 					push_back
#define endl 				'\n'
#define ff 					first
#define ss 					second
#define vi 					vector<int>
#define pii 				pair<int, int>
#define all(x)				(x).begin(), (x).end()
#define rep(i, a, b)		for(int i=a; i<b; i++)
#define setbits(x) 			__builtin_popcountll(x)
#define FIO 				ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define INF 				1e19
#define MAX 				100005
#define mod 				1000000007 // 1e9+7

using namespace std;


pair<int, int> p2(int n) {
	int count = 0;
	while (n && n % 2 == 0) {
		count++;
		n /= 2;
	}
	return {n, count};
}

void solve() {

	int n; cin >> n;
	map<int, vector<int>> mp;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		if (x % 2) continue;
		auto p = p2(x);
		mp[p.first].pb(p.second);
	}

	int ans = 0;

	for (auto p : mp) {
		int mx = 0;
		for (auto x : p.second) mx = max(mx, x);
		ans += mx;
	}

	cout << ans << endl;
}

signed main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	FIO

	int t; cin >> t;
	while (t--) {
		solve();
	}
}
