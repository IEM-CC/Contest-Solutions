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

void solve() {

	int n; cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	sort(a, a + n, greater<int>());

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	} cout << endl;

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
