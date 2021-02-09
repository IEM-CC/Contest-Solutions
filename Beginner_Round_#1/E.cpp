#include<bits/stdc++.h>
using namespace std;

int main() {

	int h1, h2, a, b, dist, ans;

	cin >> h1 >> h2;
	cin >> a >> b;

	dist = h2 - h1;

	// Speical Case
	if (dist <= 8 * a) {
		cout << "0\n";
		return 0;
	}

	dist -= 8 * a;
	if (b >= a) {
		cout << "-1\n";
		return 0;
	}


	if (dist % (12 * (a - b)) == 0)
		ans = dist / (12 * (a - b));
	else
		ans = dist / (12 * (a - b)) + 1;

	cout << ans << "\n";


	return 0;
}
