#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main() {

    string S1, S2;
    int i, n;

    cin >> S1;
    cin >> S2;
    n = S1.length();

    for (i = 0 ; i < n ; i++) {
        if ((int)S1[i] >= 97) {
            S1[i] = char((int)S1[i] - 32);
        }
        if ((int)S2[i] >= 97) {
            S2[i] = char((int)S2[i] - 32);
        }
    }

    if (S1 < S2)
        cout << "-1\n";
    else if (S1 == S2)
        cout << "0\n";
    else
        cout << "1\n";

    return 0;
}

