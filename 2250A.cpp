#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> w(n + 1);
        for (int i = 1; i <= n; i++) cin >> w[i];

        if (n % 2 != 0) {
            cout << "NO\n";
            continue;
        }

        long long minOdd = LLONG_MAX, maxEven = LLONG_MIN;
        for (int i = 1; i <= n; i++) {
            if (i % 2 == 1) minOdd = min(minOdd, w[i]);
            else maxEven = max(maxEven, w[i]);
        }

        cout << ((minOdd - maxEven >= 2) ? "YES" : "NO") << "\n";
    }
    return 0;
}