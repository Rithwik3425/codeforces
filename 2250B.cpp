#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        int b = n - k; 

        if (b == 1) {
            cout << "-1\n";
            continue;
        }

        int extraZero = (n + 1) / 2 - (b + 1) / 2; 
        int extraOne  = n / 2 - b / 2; 

        string s;
        for (int i = 0; i < b; i++) {
            int len = 1;
            if (i == 0) len += extraZero;
            if (i == 1) len += extraOne;
            s += string(len, (i % 2 == 0) ? '0' : '1');
        }

        cout << s << "\n";
    }
    return 0;
}