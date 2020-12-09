#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main() {

    int T, n, i, index;

    cin >> T;
    while (T--) {

        cin >> n;
        int A[n];
        for (i = 0 ; i < n ; i++) {
            cin >> A[i];
        }

        index = -1;
        bool found = false;
        for (i = 1 ; i <= (n - 2) ; i++) {
            if (A[i] > A[i - 1] && A[i] > A[i + 1]) {
                found = true;
                index = i;
                break;
            }
        }

        if (!found)
            cout << "NO\n";
        else {
            cout << "YES\n";
            index += 1;
            cout << index - 1 << " " << index << " " << index + 1 << "\n";
        }
    }

    return 0;
}


