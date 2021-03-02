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

#define watch(x) cout<<(#x)<<" is "<<(x)<<"\n"
#define watch2(x,y) cout<<(#x)<<" is "<<(x)<<" and "<<(#y)<< " is " <<(y)<<"\n"

using namespace std;

void solve() {

	int w, h, n;
	cin >> w >> h >> n;

	set<int> x, y;

	x.insert(0);
	x.insert(w);
	y.insert(0);
	y.insert(h);

	multiset<int> mx, my;

	mx.insert(w);
	my.insert(h);

	for (int i = 0; i < n; i++) {
		char c; int p;
		cin >> c >> p;
		if (c == 'V') {
			x.insert(p);
			auto it = x.find(p);
			auto r = it, l = it;
			l--, r++;

			int oldGap = *r - *l;
			int newGap1 = *r - *it;
			int newGap2 = *it - *l;

			// delete oldGap
			mx.erase(mx.find(oldGap));
			// insert new gap
			mx.insert(newGap1);
			mx.insert(newGap2);

		} else {
			y.insert(p);
			auto it = y.find(p);
			auto r = it, l = it;
			l--, r++;

			int oldGap = *r - *l;
			int newGap1 = *r - *it;
			int newGap2 = *it - *l;

			// delete oldGap
			my.erase(my.find(oldGap));
			// insert new gap
			my.insert(newGap1);
			my.insert(newGap2);
		}

		cout << (*mx.rbegin())*(*my.rbegin()) << endl;
	}
}

signed main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	FIO

	solve();
}
