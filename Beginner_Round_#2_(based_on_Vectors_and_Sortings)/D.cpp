// KEEP CALM and Enjoy the Problem B-)
#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define mod 1000000007 // 1e9+7
#define inf 1e18
using namespace std;

bool check_sorted(ll A[], ll n) {

    ll i;

    for (i = 0 ; i <= (n - 2) ; i++) {
        if (A[i] > A[i + 1])
            return false;
    }
    return true;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll T, n, x, i, index, count, flag;

    cin >> T;
    while (T--) {

        cin >> n >> x;
        ll A[n];
        for (i = 0 ; i < n ; i++) {
            cin >> A[i];
        }


        count = 0;
        flag = 1;
        while ( check_sorted(A, n) == false) {

            index = -1;
            for (i = 0 ; i < n ; i++) {
                if (A[i] > x) {
                    index = i;
                    break;
                }
            }
            // Special Case: index not found
            if (index == -1) {
                flag = 0;
                break;
            }

            swap(A[index], x);
            count += 1;
        }

        if (flag == 0) {
            cout << "-1\n";
            continue;
        }

        cout << count << "\n";

    }

    return 0;
}

 