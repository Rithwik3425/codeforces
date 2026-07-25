#include <iostream>
using namespace std;

bool is_lucky(int x) {
    while (x > 0) {
        int digit = x % 10;
        if (digit != 4 && digit != 7) return false;
        x /= 10;
    }
    return true;
}
bool is_almost_lucky(int n) {
    for (int i = 1; i <= n; i++) {
        if (is_lucky(i) && n % i == 0) {
            return true;
        }
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    cout << (is_almost_lucky(n) ? "YES\n" : "NO\n");
    return 0;
}