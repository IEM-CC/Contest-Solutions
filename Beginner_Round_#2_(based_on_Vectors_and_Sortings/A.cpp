#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define mod 1000000007 // 1e9+7
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); // Remove for interactive I/O
	cin.tie(NULL);

	ll i, n, num, flag, count;

	vector<ll> V;

	n = 6;
	for (i = 0 ; i < n ; i++ )
	{
		cin >> num;
		V.push_back(num);
	}

	sort(V.begin() , V.end());

	flag = 0;
	for (i = 0 ; i <= (n - 4) ; )
	{
		if (V[i] == V[i + 1])
		{
			count = 1;
			while (V[i] == V[i + 1] && count < 4)
			{
				count += 1;
				i += 1;
			}
			//cout<<count<<"\n";
			if (count == 4)
			{
				V.erase(V.begin() + i - 3, V.begin() + i + 1);
				flag = 1;
				break;
				//Ideally, we should have resized the vector and adjusted increment accordingly
				// But since, after erasing the duplicate elements we don't do anything else, hecne we don't bother to do anything!
			}
		}
		else
			i += 1;
	}
	n = V.size();

	// Special Case
	if (flag == 0)
	{
		cout << "Alien\n";
		return 0;
	}

	if (V[0] == V[1])
		cout << "Elephant\n";
	else
		cout << "Bear\n";

	return 0;
}