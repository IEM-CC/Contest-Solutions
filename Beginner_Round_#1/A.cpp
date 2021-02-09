#include<bits/stdc++.h>
using namespace std;

int main() {

	int n, S, ans;

	cin >> n >> S;

	if (S % n == 0)
		ans = S / n;
	else
		ans = S / n + 1;

	cout << ans << "\n";

	return 0;
}

