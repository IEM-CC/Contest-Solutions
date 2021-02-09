#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define mod 1000000007 // 1e9+7
using namespace std;

bool compare(ll a, ll b) {
	return (a > b);
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll T, n, N_V, i, j;

	cin >> T;
	while (T--) {

		cin >> n;
		ll A[n];
		ll L[n];
		for (i = 0 ; i < n ; i++)
			cin >> A[i];
		for (i = 0 ; i < n ; i++)
			cin >> L[i];

		vector<ll> V;
		V.reserve(n);
		for (i = 0 ; i < n ; i++) {
			if (L[i] == 0) {
				V.push_back(A[i]);
			}
		}
		N_V = V.size();
		sort(V.begin(), V.end(), compare);
		j = 0;
		for (i = 0 ; i < n ; i++) {
			if (L[i] == 0) {
				A[i] = V[j];
				j += 1;
			}
		}
		// Final Answer
		for (i = 0 ; i < n ; i++)
			cout << A[i] << " ";
		cout << "\n";
	}

	return 0;
}