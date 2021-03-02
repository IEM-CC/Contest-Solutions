#include <bits/stdc++.h>
#define int long long
#define pb push_back
using namespace std;

signed main() {

	int n; cin >> n;
	int a[n];
	int sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
	}

	int b[n];
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}

	sort(b, b + n);
	int x = b[n - 1] + b[n - 2];

	if (sum <= x) {
		cout << "YES";
	} else {
		cout << "NO";
	}



}
