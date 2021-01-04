#include <iostream>
using namespace std;

void solve() {
	int a, b;
	cin >> a >> b;

	if ((a + b) % 3 == 0) {
		if (a >= (a + b) / 3 && b >= (a + b) / 3) {
			cout << "YES" << endl;
			return;
		}
	}

	cout << "NO" << endl;
}

int main() {
	int t; cin >> t;

	while (t--) solve();
}
