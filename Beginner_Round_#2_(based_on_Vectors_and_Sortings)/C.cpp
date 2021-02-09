#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

bool compare(ll x, ll y)
{
	return (x > y);
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll T, n, x, i, j, count_team;
	ll check, num;

	cin >> T;
	while (T--)
	{
		cin >> n >> x;
		ll A[n];
		for (i = 0; i < n; i++)
			cin >> A[i];
		sort(A, A + n, compare);

		count_team = 0;
		i = 0;
		while (i <= (n - 1))
		{
			if ( (A[i] * 1) >= x )
			{
				count_team += 1;
				i += 1;
				continue;
			}
			else
			{
				//check = A[i];
				num = 1;
				j = i;
				while (j <= (n - 1))
				{
					if ( (A[j] * num) >= x )
					{
						count_team += 1;
						break;
					}

					j += 1;
					num += 1;
				}

				i = (j + 1);
			}
		}

		cout << count_team << "\n";
	}

	return 0;
}