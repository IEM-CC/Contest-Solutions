#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main() {

    int n, T, a, b;

    cin >> T;
    while (T--) {

        cin >> a >> b >> n;
        if (n % 3 == 0)
            cout << a << "\n";
        else if (n % 3 == 1)
            cout << b << "\n";
        else
            cout << (a ^ b) << "\n";
    }

    return 0;
}
